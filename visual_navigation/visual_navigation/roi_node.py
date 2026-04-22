#!/usr/bin/env python3

import json
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2


class ROIFeatureNode(Node):
    
    def __init__(self):
        super().__init__('roi_feature_node')

        # roi_size controls how many rows/cols the grid has (default 3 → 3x3)
        self.declare_parameter('roi_size', 3)
        self.roi_size = self.get_parameter('roi_size').value

        # Subscriber
        self.create_subscription(Image, '/camera_frames', self.callback, 10)

        # Publisher
        self.pub = self.create_publisher(String, '/roi_features', 10)

        self.bridge = CvBridge()
        self.get_logger().info(f"ROI & Feature Extraction Node started (grid {self.roi_size}x{self.roi_size})")

    
    def callback(self, msg):
        try:
            frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
            gray  = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

            h, w  = gray.shape
            n     = self.roi_size
            cells = []

            for row in range(n):
                for col in range(n):
                    # Slice the frame into equal-sized ROI cells
                    y1 = row * h // n
                    y2 = (row + 1) * h // n
                    x1 = col * w // n
                    x2 = (col + 1) * w // n

                    cell = gray[y1:y2, x1:x2]

                    # Pixel statistics
                    mean_val  = float(np.mean(cell))
                    std_val   = float(np.std(cell))
                    max_val   = float(np.max(cell))
                    min_val   = float(np.min(cell))

                    # Centroid of bright pixels (thresholded at mean)
                    mask = (cell > mean_val).astype(np.uint8)
                    M    = cv2.moments(mask)
                    if M['m00'] > 0:
                        cx = float(M['m10'] / M['m00']) + x1
                        cy = float(M['m01'] / M['m00']) + y1
                    else:
                        cx = float((x1 + x2) / 2)
                        cy = float((y1 + y2) / 2)

                    cells.append({
                        "row":      row,
                        "col":      col,
                        "mean":     round(mean_val, 2),
                        "std":      round(std_val, 2),
                        "max":      round(max_val, 2),
                        "min":      round(min_val, 2),
                        "centroid": [round(cx, 1), round(cy, 1)]
                    })

            # Detect ORB keypoints in the full frame for feature richness score
            orb       = cv2.ORB_create(nfeatures=200)
            kp, _     = orb.detectAndCompute(gray, None)
            n_kp      = len(kp) if kp else 0

            # Draw grid lines on a copy for the debug window
            vis = frame.copy()
            for i in range(1, n):
                cv2.line(vis, (i * w // n, 0), (i * w // n, h), (0, 200, 255), 1)
                cv2.line(vis, (0, i * h // n), (w, i * h // n), (0, 200, 255), 1)
            cv2.putText(vis, f"Keypoints: {n_kp}", (10, 25),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 200, 255), 2)
            cv2.imshow("ROI Grid", vis)
            cv2.waitKey(1)

            payload = json.dumps({"cells": cells, "keypoints": n_kp})
            self.pub.publish(String(data=payload))

        except Exception as e:
            self.get_logger().error(f"ROI callback error: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = ROIFeatureNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    cv2.destroyAllWindows()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
