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

        self.declare_parameter('roi_size', 3)
        self.declare_parameter('visualize', True)

        self.roi_size = self.get_parameter('roi_size').value
        self.visualize = self.get_parameter('visualize').value

        self.create_subscription(Image, '/camera_frames', self.callback, 10)
        self.pub = self.create_publisher(String, '/roi_features', 10)

        self.bridge = CvBridge()
        self.orb = cv2.ORB_create(nfeatures=300)

        self.get_logger().info("ROI Feature Node FIXED started")

    def callback(self, msg):

        frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

        h, w = gray.shape
        n = self.roi_size

        cells = []

        # ---------------- GLOBAL FEATURES ----------------
        kp, _ = self.orb.detectAndCompute(gray, None)
        n_kp = len(kp) if kp else 0

        # ---------------- ROI PROCESSING ----------------
        for row in range(n):
            for col in range(n):

                y1 = row * h // n
                y2 = (row + 1) * h // n
                x1 = col * w // n
                x2 = (col + 1) * w // n

                cell = gray[y1:y2, x1:x2]

                mean_val = float(np.mean(cell))
                std_val = float(np.std(cell))

                # 🔥 FIX: better centroid detection (edges instead of brightness)
                edges = cv2.Canny(cell, 50, 150)

                M = cv2.moments(edges)

                if M["m00"] > 0:
                    cx = M["m10"] / M["m00"] + x1
                    cy = M["m01"] / M["m00"] + y1
                    centroid = [round(cx, 1), round(cy, 1)]
                else:
                    centroid = [-1.0, -1.0]

                cells.append({
                    "row": row,
                    "col": col,
                    "mean": round(mean_val, 2),
                    "std": round(std_val, 2),
                    "centroid": centroid
                })

        # ---------------- PUBLISH ONCE PER FRAME (IMPORTANT FIX) ----------------
        timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9

        payload = {
            "timestamp": timestamp,
            "cells": cells,
            "keypoints": n_kp
        }

        self.pub.publish(String(data=json.dumps(payload)))

        # ---------------- DEBUG ----------------
        self.get_logger().info(f"Cells: {len(cells)} | KP: {n_kp}")

        # ---------------- VISUALIZATION ----------------
        if self.visualize:
            vis = frame.copy()

            for i in range(1, n):
                cv2.line(vis, (i * w // n, 0), (i * w // n, h), (0, 255, 255), 1)
                cv2.line(vis, (0, i * h // n), (w, i * h // n), (0, 255, 255), 1)

            for c in cells:
                cx, cy = c["centroid"]
                if cx != -1:
                    cv2.circle(vis, (int(cx), int(cy)), 3, (0, 0, 255), -1)

            cv2.putText(vis, f"KP: {n_kp}", (10, 20),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)

            cv2.imshow("ROI Features", vis)
            cv2.waitKey(1)


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