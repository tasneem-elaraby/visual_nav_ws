#!/usr/bin/env python3

import json
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class NavigationDecisionNode(Node):
   
    def __init__(self):
        super().__init__('navigation_decision_node')

        # Normalised depth value below which an object is considered dangerously close
        self.declare_parameter('safety_distance', 0.3)
        self.safety_distance = self.get_parameter('safety_distance').value

        # map safety_distance to a zone threshold used in decisions
        # safety_distance < 0.33 → treat "near" zone as danger; else only stop when very close
        self._danger_zone = "near" if self.safety_distance <= 0.33 else "medium"

        # Subscribers
        self.create_subscription(String, '/camera_motion', self.motion_cb,  10)
        self.create_subscription(String, '/object_data',   self.object_cb,  10)
        self.create_subscription(String, '/depth_data',    self.depth_cb,   10)

        # Publisher
        self.pub = self.create_publisher(String, '/navigation_command', 10)

        # Latest snapshot from each source
        self._motion  = {}
        self._objects = []
        self._depth   = {}

        # Timestamps of last received message per topic
        self._t_motion  = None
        self._t_objects = None
        self._t_depth   = None

        # If a topic has been silent for this many seconds, treat it as stale
        self.declare_parameter('stale_timeout', 1.0)
        self.stale_timeout = self.get_parameter('stale_timeout').value

        # Timer fuses the three sources at 5 Hz and publishes a decision
        self.create_timer(0.2, self.decide)

        self.get_logger().info("Navigation Decision Node started")

    
    def motion_cb(self, msg):
        try:
            self._motion = json.loads(msg.data)
            self._t_motion = self.get_clock().now()
        except Exception:
            pass

    def object_cb(self, msg):
        try:
            self._objects = json.loads(msg.data)
            self._t_objects = self.get_clock().now()
        except Exception:
            pass

    def depth_cb(self, msg):
        try:
            self._depth = json.loads(msg.data)
            self._t_depth = self.get_clock().now()
        except Exception:
            pass

    
    def _is_stale(self, timestamp):
        """Returns True if timestamp is None or older than stale_timeout seconds."""
        if timestamp is None:
            return True
        age = (self.get_clock().now() - timestamp).nanoseconds / 1e9
        return age > self.stale_timeout

    def decide(self):
        # Stale data check — STOP if any critical topic has gone silent
        if self._is_stale(self._t_motion) or self._is_stale(self._t_depth):
            payload = json.dumps({
                "command":    "STOP",
                "reason":     ["stale_data"],
                "direction":  "unknown",
                "depth_zone": "unknown",
                "n_objects":  0
            })
            self.pub.publish(String(data=payload))
            self.get_logger().warn("NAV → STOP  (stale_data — topic silent)")
            return

        direction  = self._motion.get('direction',  'unknown')
        confidence = self._motion.get('confidence', 'low')
        zone       = self._depth.get('zone',        'unknown')
        n_objects  = len(self._objects)

        command  = "UNKNOWN"
        reason   = []

        # Rule 1: VO flagged unreliable → mandatory STOP
        if direction == "STOP" or confidence == "low":
            command = "STOP"
            reason.append("unreliable_motion_estimate")

        # Rule 2: object too close → STOP regardless of direction
        elif zone == self._danger_zone and n_objects > 0:
            command = "STOP"
            reason.append("obstacle_too_close")

        # Rule 3: object at medium range → pick open side or reverse
        elif zone == "medium" and n_objects > 0 and self._danger_zone == "near":
            left_occupied  = any(d['center'][0] < 320 for d in self._objects)
            right_occupied = any(d['center'][0] >= 320 for d in self._objects)

            if not left_occupied:
                command = "MOVE_LEFT"
                reason.append("obstacle_medium_go_left")
            elif not right_occupied:
                command = "MOVE_RIGHT"
                reason.append("obstacle_medium_go_right")
            else:
                # Both sides blocked — reverse away from obstacle
                command = "MOVE_BACKWARD"
                reason.append("both_sides_blocked_reversing")

        # Rule 4: camera moving backward → propagate as MOVE_BACKWARD
        elif direction == "moving_backward":
            command = "MOVE_BACKWARD"
            reason.append("following_camera_motion")

        # Rule 5: follow camera motion direction
        elif direction == "moving_left":
            command = "MOVE_LEFT"
            reason.append("following_camera_motion")
        elif direction == "moving_right":
            command = "MOVE_RIGHT"
            reason.append("following_camera_motion")
        elif direction in ("moving_forward", "stationary"):
            command = "MOVE_FORWARD"
            reason.append("path_clear")
        else:
            command = "STOP"
            reason.append("unknown_state")

        payload = json.dumps({
            "command":     command,
            "reason":      reason,
            "direction":   direction,
            "depth_zone":  zone,
            "n_objects":   n_objects
        })

        self.pub.publish(String(data=payload))
        self.get_logger().info(f"NAV → {command}  ({', '.join(reason)})")


def main(args=None):
    rclpy.init(args=args)
    node = NavigationDecisionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
