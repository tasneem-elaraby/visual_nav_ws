#!/usr/bin/env python3

import json
import numpy as np
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class MotionTrackingNode(Node):

    def __init__(self):
        super().__init__('motion_tracking_node')

        # Minimum mean-change in a cell before it counts as motion
        self.declare_parameter('motion_threshold', 5.0)
        self.motion_threshold = self.get_parameter('motion_threshold').value

        # Subscriber: ROI features from the previous node
        self.create_subscription(String, '/roi_features', self.callback, 10)

        # Publisher: motion vectors and overall motion summary
        self.pub = self.create_publisher(String, '/motion_data', 10)

        # Store the previous frame feature snapshot for comparison
        self.prev_cells = None

        self.get_logger().info("Motion Tracking Node started")

    
    def callback(self, msg):
        try:
            data        = json.loads(msg.data)
            curr_cells  = data.get('cells', [])
            n_keypoints = data.get('keypoints', 0)

            if self.prev_cells is None:
                # First frame – nothing to compare 
                self.prev_cells = curr_cells
                return

            cell_motions = []
            total_dx = 0.0
            total_dy = 0.0
            active   = 0

            for prev, curr in zip(self.prev_cells, curr_cells):
                # Change in mean pixel intensity between frames for this cell
                delta_mean = abs(curr['mean'] - prev['mean'])

                # Centroid shift gives a crude motion vector for the cell
                dx = curr['centroid'][0] - prev['centroid'][0]
                dy = curr['centroid'][1] - prev['centroid'][1]

                moving = delta_mean > self.motion_threshold
                if moving:
                    active   += 1
                    total_dx += dx
                    total_dy += dy

                cell_motions.append({
                    "row":        curr['row'],
                    "col":        curr['col'],
                    "delta_mean": round(delta_mean, 2),
                    "dx":         round(dx, 2),
                    "dy":         round(dy, 2),
                    "moving":     moving
                })

            # Aggregate motion direction across all active cells
            n_cells = len(curr_cells) if curr_cells else 1
            avg_dx  = total_dx / n_cells
            avg_dy  = total_dy / n_cells

            # textureless or blurry – flag the estimate as unreliable
            reliable = n_keypoints > 30

            payload = json.dumps({
                "cell_motions": cell_motions,
                "avg_dx":       round(avg_dx, 3),
                "avg_dy":       round(avg_dy, 3),
                "active_cells": active,
                "keypoints":    n_keypoints,
                "reliable":     reliable
            })
            self.pub.publish(String(data=payload))

            self.prev_cells = curr_cells

        except Exception as e:
            self.get_logger().error(f"Motion callback error: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = MotionTrackingNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
