#!/usr/bin/env python3

import json
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import os
import torch

# Try importing DepthAnything
try:
    from depth_anything_v2.dpt import DepthAnythingV2
    DEPTH_AVAILABLE = True
except Exception as e:
    print(f"[WARN] DepthAnything not available: {e}")
    DEPTH_AVAILABLE = False


class DepthEstimationNode(Node):

    def __init__(self):
        super().__init__('depth_estimation_node')

        self.bridge = CvBridge()
        self.model = None

        # frame control for performance
        self.frame_count = 0
        self.skip_rate = 3   # run model every 3 frames

        # path to model
        model_path = os.path.expanduser(
            "~/visual_nav_ws/src/visual_navigation/models/depth_anything_v2_vits.pth"
        )

        self.get_logger().info(f"Loading model from: {model_path}")

        # load model if available
        if DEPTH_AVAILABLE and os.path.exists(model_path):
            try:
                self.model = DepthAnythingV2(
                    encoder='vits',
                    features=64,
                    out_channels=[48, 96, 192, 384]
                )

                checkpoint = torch.load(model_path, map_location='cpu')
                state_dict = checkpoint.get('state_dict') or checkpoint.get('model') or checkpoint

                self.model.load_state_dict(state_dict, strict=False)
                self.model.eval()

                self.get_logger().info("Depth model loaded")

            except Exception as e:
                self.get_logger().error(f"Model load failed: {e}")
                self.model = None
        else:
            self.get_logger().error("Depth model not found")

        # ROS interfaces
        self.create_subscription(Image, '/camera_frames', self.callback, 10)
        self.pub_depth = self.create_publisher(String, '/depth_data', 10)

        # optional visualization window
        try:
            cv2.namedWindow("Depth Map", cv2.WINDOW_NORMAL)
        except:
            pass

        self.last_depth = None

        self.get_logger().info("Depth Node Ready")

    def callback(self, msg):

        if self.model is None:
            return

        try:
            frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
            self.frame_count += 1

            # run model every few frames (for CPU performance)
            if self.frame_count % self.skip_rate == 0 or self.last_depth is None:

                # smaller resolution for speed
                inp = cv2.resize(frame, (256, 256))

                depth_small = self.model.infer_image(inp)

                # resize back to original size
                depth = cv2.resize(
                    depth_small,
                    (frame.shape[1], frame.shape[0])
                )

                self.last_depth = depth

            else:
                # reuse last depth to avoid gaps
                depth = self.last_depth

            # visualization (not every frame)
            if self.frame_count % 10 == 0:
                dmin, dmax = float(depth.min()), float(depth.max())
                depth_vis = ((depth - dmin) / (dmax - dmin + 1e-6) * 255).astype(np.uint8)
                depth_color = cv2.applyColorMap(depth_vis, cv2.COLORMAP_INFERNO)

                cv2.imshow("Depth Map", depth_color)
                cv2.waitKey(1)

            # compute regions
            h, w = depth.shape
            cx, cy = w // 2, h // 2

            center_crop = depth[cy-25:cy+25, cx-25:cx+25]
            left_crop   = depth[cy-25:cy+25, 0:w//3]
            right_crop  = depth[cy-25:cy+25, (2*w)//3:w]

            center_depth = float(np.mean(center_crop))
            left_depth   = float(np.mean(left_crop))
            right_depth  = float(np.mean(right_crop))

            # simple decision based on relative values
            if center_depth < left_depth and center_depth < right_depth:
                zone = "near"
            elif center_depth < (left_depth + right_depth) / 2:
                zone = "medium"
            else:
                zone = "far"

            # timestamp for synchronization
            timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9

            # publish result
            self.pub_depth.publish(String(data=json.dumps({
                "timestamp": round(timestamp, 6),
                "center_depth": round(center_depth, 4),
                "left_depth": round(left_depth, 4),
                "right_depth": round(right_depth, 4),
                "zone": zone
            })))

        except Exception as e:
            self.get_logger().error(f"Depth error: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = DepthEstimationNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    cv2.destroyAllWindows()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
