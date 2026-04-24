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

        self.create_subscription(String, '/roi_features', self.callback, 10)
        self.pub = self.create_publisher(String, '/motion_data', 10)

        self.prev_gray_points = None
        self.prev_frame_gray = None

        self.get_logger().info("OPTICAL FLOW Motion Node started")

    def callback(self, msg):

        data = json.loads(msg.data)
        cells = data["cells"]

        # convert ROI centroids to points
        points = []

        for c in cells:
            x, y = c["centroid"]
            if x != -1:
                points.append([x, y])

        points = np.array(points, dtype=np.float32)

        # first frame
        if self.prev_gray_points is None:
            self.prev_gray_points = points
            return

        if len(points) == 0 or len(self.prev_gray_points) == 0:
            return

        # compute motion vectors
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
                dx_list.append(best_p2[0] - p1[0])
                dy_list.append(best_p2[1] - p1[1])

        if len(dx_list) == 0:
            return

        avg_dx = float(np.mean(dx_list))
        avg_dy = float(np.mean(dy_list))

        # direction
        direction = "stationary"

        if abs(avg_dx) > 1.0:
            direction = "right" if avg_dx > 0 else "left"
        elif abs(avg_dy) > 1.0:
            direction = "down" if avg_dy > 0 else "up"

        msg_out = {
            "dx": round(avg_dx, 2),
            "dy": round(avg_dy, 2),
            "direction": direction
        }

        self.pub.publish(String(data=json.dumps(msg_out)))

        self.prev_gray_points = points


def main(args=None):
    rclpy.init(args=args)
    node = MotionTrackingNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()