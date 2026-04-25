#!/usr/bin/env python3

import json
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class NavigationDecisionNode(Node):

    def __init__(self):
        super().__init__('navigation_decision_node')

        # safety threshold parameter
        self.declare_parameter('safety_distance', 0.3)
        self.safety_distance = self.get_parameter('safety_distance').value

        # map safety distance to danger zone
        self._danger_zone = "near" if self.safety_distance <= 0.33 else "medium"

        # subscribers
        self.create_subscription(String, '/camera_motion', self.motion_cb, 10)
        self.create_subscription(String, '/object_data', self.object_cb, 10)
        self.create_subscription(String, '/depth_data', self.depth_cb, 10)

        # publisher
        self.pub = self.create_publisher(String, '/navigation_command', 10)

        # internal state
        self._motion = {}
        self._objects = []
        self._depth = {}

        self._t_motion = None
        self._t_depth = None

        # stale timeout
        self.declare_parameter('stale_timeout', 1.0)
        self.stale_timeout = self.get_parameter('stale_timeout').value

        # smoothing buffer
        self.last_commands = []
        self.prev_command = "STOP"

        # decision timer (5 Hz)
        self.create_timer(0.2, self.decide)

        self.get_logger().info("Navigation Decision Node started")

    def motion_cb(self, msg):
        try:
            self._motion = json.loads(msg.data)
            self._t_motion = self.get_clock().now()
        except:
            pass

    def object_cb(self, msg):
        try:
            self._objects = json.loads(msg.data)
        except:
            pass

    def depth_cb(self, msg):
        try:
            self._depth = json.loads(msg.data)
            self._t_depth = self.get_clock().now()
        except:
            pass

    def _is_stale(self, timestamp):
        if timestamp is None:
            return True
        age = (self.get_clock().now() - timestamp).nanoseconds / 1e9
        return age > self.stale_timeout

    def smooth_command(self, command):
        self.last_commands.append(command)

        if len(self.last_commands) > 3:
            self.last_commands.pop(0)

        return max(set(self.last_commands), key=self.last_commands.count)

    def decide(self):

        # check for stale data
        if self._is_stale(self._t_motion) or self._is_stale(self._t_depth):
            command = "STOP"
            reason = ["stale_data"]

        else:
            direction = self._motion.get('direction', 'unknown')
            confidence = self._motion.get('confidence', 'low')
            zone = self._depth.get('zone', 'unknown')

            center = self._depth.get('center_depth', 0)
            left = self._depth.get('left_depth', 0)
            right = self._depth.get('right_depth', 0)

            n_objects = len(self._objects)

            command = "STOP"
            reason = []

            # unreliable motion estimate
            if direction == "STOP" or confidence == "low":
                command = "STOP"
                reason.append("unreliable_motion")

            # obstacle very close
            elif zone == self._danger_zone and n_objects > 0:
                if left > right:
                    command = "MOVE_LEFT"
                else:
                    command = "MOVE_RIGHT"
                reason.append("avoid_obstacle")

            # medium distance obstacle
            elif zone == "medium" and n_objects > 0:
                if left > right:
                    command = "MOVE_LEFT"
                else:
                    command = "MOVE_RIGHT"
                reason.append("navigate_around")

            # follow camera motion
            elif direction == "moving_left":
                command = "MOVE_LEFT"
                reason.append("follow_motion")

            elif direction == "moving_right":
                command = "MOVE_RIGHT"
                reason.append("follow_motion")

            elif direction in ("moving_forward", "stationary"):
                command = "MOVE_FORWARD"
                reason.append("clear_path")

            else:
                command = "STOP"
                reason.append("unknown")

        # apply smoothing to reduce jitter
        command = self.smooth_command(command)

        # update previous command
        if command != self.prev_command:
            self.prev_command = command

        payload = json.dumps({
            "command": command,
            "reason": reason
        })

        self.pub.publish(String(data=payload))
        self.get_logger().info(f"NAV → {command} ({', '.join(reason)})")


def main(args=None):
    rclpy.init(args=args)
    node = NavigationDecisionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
