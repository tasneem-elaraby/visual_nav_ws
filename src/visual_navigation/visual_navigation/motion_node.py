#!/usr/bin/env python3

import json
import numpy as np
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import cv2


class MotionTrackingNode(Node):

    def __init__(self):
        super().__init__('motion_tracking_node')

        # threshold below which pixel shift is treated as stationary
        self.declare_parameter('motion_threshold', 1.0)
        self.motion_threshold = self.get_parameter('motion_threshold').value

        self.create_subscription(String, '/roi_features', self.callback, 10)
        self.pub = self.create_publisher(String, '/motion_data', 10)

        self.prev_gray_points = None
        self.prev_keypoints = 0

        self.get_logger().info("OPTICAL FLOW Motion Node started")

    def callback(self, msg):

        data = json.loads(msg.data)
        cells = data["cells"]
        keypoints = data.get("keypoints", 0)

        # convert ROI centroids to points
        points = []

        for c in cells:
            x, y = c["centroid"]
            if x != -1:
                points.append([x, y])

        points = np.array(points, dtype=np.float32)

        # first frame — store and wait
        if self.prev_gray_points is None:
            self.prev_gray_points = points
            self.prev_keypoints = keypoints
            return

        if len(points) == 0 or len(self.prev_gray_points) == 0:
            return

        # compute motion vectors via nearest-neighbour matching
        dx_list = []
        dy_list = []

        for p1 in self.prev_gray_points:
            best_p2 = None
            best_d = 1e9

            for p2 in points:
                d = np.linalg.norm(p1 - p2)

                if d < best_d:
                    best_d = d
                    best_p2 = p2

            if best_p2 is not None:
                dx_list.append(float(best_p2[0] - p1[0]))
                dy_list.append(float(best_p2[1] - p1[1]))

        if len(dx_list) == 0:
            return

        avg_dx = float(np.mean(dx_list))
        avg_dy = float(np.mean(dy_list))

        # use motion_threshold parameter for direction decision
        thr = self.motion_threshold
        direction = "stationary"

        if abs(avg_dx) > thr:
            direction = "right" if avg_dx > 0 else "left"
        elif abs(avg_dy) > thr:
            direction = "down" if avg_dy > 0 else "up"

        # publish keys that vo_node expects: avg_dx, avg_dy, active_cells, reliable, keypoints
        msg_out = {
            "avg_dx":       round(avg_dx, 2),
            "avg_dy":       round(avg_dy, 2),
            "direction":    direction,
            "active_cells": len(dx_list),
            "reliable":     True,
            "keypoints":    keypoints
        }

        self.pub.publish(String(data=json.dumps(msg_out)))

        self.prev_gray_points = points
        self.prev_keypoints = keypoints


def main(args=None):
    rclpy.init(args=args)
    node = MotionTrackingNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
