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

# Try importing model
try:
    from depth_anything_v2.dpt import DepthAnythingV2
    DEPTH_AVAILABLE = True
except Exception as e:
    print(f"[WARN] DepthAnythingV2 not found – using fallback: {e}")
    DEPTH_AVAILABLE = False


class DepthEstimationNode(Node):

    def __init__(self):
        super().__init__('depth_estimation_node')

        self.declare_parameter('depth_threshold', 0.5)
        self.depth_threshold = self.get_parameter('depth_threshold').value

        # derive zone boundaries from depth_threshold
        # near < threshold/2 < medium < threshold < far
        self.near_limit   = self.depth_threshold / 2.0     # e.g. 0.25
        self.medium_limit = self.depth_threshold            # e.g. 0.50

        self.bridge = CvBridge()
        self.model = None

        # package name
        model_path = os.path.expanduser(
            "~/visual_nav_ws/src/visual_navigation/models/depth_anything_v2_vits.pth"
        )

        self.get_logger().info(f"Looking for depth model at: {model_path}")

        # Load model if available
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

                self.get_logger().info("Depth model loaded successfully")

            except Exception as e:
                self.get_logger().error(f"Model loading failed: {e}")
                self.model = None
        else:
            self.get_logger().warn("⚠ Using random depth fallback")

        # Subscriber
        self.create_subscription(Image, '/camera_frames', self.callback, 10)

        # pulish JSON to /depth_data
        self.pub_depth = self.create_publisher(String, '/depth_data', 10)

        # Visualization window
        try:
            cv2.namedWindow("Depth Map", cv2.WINDOW_NORMAL)
        except Exception:
            pass

        self.get_logger().info("Depth Node Ready")

    def callback(self, msg):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')

            # Depth estimation
            if self.model is not None:
                inp = cv2.resize(frame, (384, 384))
                depth_small = self.model.infer_image(inp)
                depth = cv2.resize(depth_small, (frame.shape[1], frame.shape[0]))
            else:
                h, w = frame.shape[:2]
                depth = np.random.rand(h, w).astype(np.float32)

            # Normalize for visualization
            dmin, dmax = float(depth.min()), float(depth.max())
            depth_vis = ((depth - dmin) / (dmax - dmin + 1e-6) * 255).astype(np.uint8)

            depth_color = cv2.applyColorMap(depth_vis, cv2.COLORMAP_INFERNO)

            try:
                cv2.imshow("Depth Map", depth_color)
                cv2.waitKey(1)
            except Exception:
                pass

            #  COMPUTATION
            h, w = depth.shape
            cx, cy = w // 2, h // 2

            # --- center zone (what's directly ahead) ---
            center_crop = depth[
                max(0, cy - 30): min(h, cy + 30),
                max(0, cx - 30): min(w, cx + 30)
            ]
            center_depth = float(np.mean(center_crop)) if center_crop.size else 0.0

            # --- left zone (left third of frame, vertically centered) ---
            left_crop = depth[
                max(0, cy - 30): min(h, cy + 30),
                0: w // 3
            ]
            left_depth = float(np.mean(left_crop)) if left_crop.size else 0.0

            # --- right zone (right third of frame, vertically centered) ---
            right_crop = depth[
                max(0, cy - 30): min(h, cy + 30),
                (2 * w) // 3: w
            ]
            right_depth = float(np.mean(right_crop)) if right_crop.size else 0.0

            # Zone classification based on center depth
            depth_range = dmax - dmin + 1e-6
            norm_center = (center_depth - dmin) / depth_range

            if norm_center < self.near_limit:
                zone = "near"
            elif norm_center < self.medium_limit:
                zone = "medium"
            else:
                zone = "far"

            # timestamp for downstream sync
            timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9

            # OUTPUT for nav node
            self.pub_depth.publish(String(data=json.dumps({
                "timestamp":    round(timestamp, 6),
                "center_depth": round(center_depth, 4),
                "left_depth":   round(left_depth, 4),
                "right_depth":  round(right_depth, 4),
                "min_depth":    round(dmin, 4),
                "max_depth":    round(dmax, 4),
                "zone":         zone
            })))

        except Exception as e:
            self.get_logger().error(f"Depth callback error: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = DepthEstimationNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
