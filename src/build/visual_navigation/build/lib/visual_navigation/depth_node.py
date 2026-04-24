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

from ament_index_python.packages import get_package_share_directory

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

        self.bridge = CvBridge()
        self.model = None

        # package name
        pkg_share = get_package_share_directory('visual_navigation')
        model_path = os.path.join(pkg_share, 'models', 'depth_anything_v2_vits.pth')

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

            crop = depth[
                max(0, cy - 30): min(h, cy + 30),
                max(0, cx - 30): min(w, cx + 30)
            ]

            center_depth = float(np.mean(crop)) if crop.size else 0.0

            # Zone classification
            depth_range = dmax - dmin + 1e-6
            norm_center = (center_depth - dmin) / depth_range

            if norm_center < 0.33:
                zone = "near"
            elif norm_center < 0.66:
                zone = "medium"
            else:
                zone = "far"

            # OUTPUT for nav node
            self.pub_depth.publish(String(data=json.dumps({
                "center_depth": round(center_depth, 4),
                "min_depth": round(dmin, 4),
                "max_depth": round(dmax, 4),
                "zone": zone
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