#!/usr/bin/env python3

import json
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_srvs.srv import Trigger


class VisualOdometryNode(Node):
    def __init__(self):
        super().__init__('visual_odometry_node')

        # Conceptual focal length used to scale pixel displacement to motion magnitude
        self.declare_parameter('focal_length', 500.0)
        self.focal_length = self.get_parameter('focal_length').value

        # Subscriber
        self.create_subscription(String, '/motion_data', self.callback, 10)

        # Publisher
        self.pub = self.create_publisher(String, '/camera_motion', 10)

        # Service: 
        self.srv = self.create_service(Trigger, '/estimate_motion', self.handle_service)

        #latest motion estimate to serve the service
        self._latest = {"direction": "unknown", "reliable": False}

        self.get_logger().info("Visual Odometry Node started")

    def callback(self, msg):
        try:
            data     = json.loads(msg.data)
            avg_dx   = data.get('avg_dx', 0.0)
            avg_dy   = data.get('avg_dy', 0.0)
            reliable = data.get('reliable', True)
            active   = data.get('active_cells', 0)
            kp       = data.get('keypoints', 0)

            
            # No active cells → static scene; cannot estimate direction
            if not reliable or kp < 20:
                direction  = "STOP"
                confidence = "low"
                reason     = "insufficient_features"
            elif active == 0:
                direction  = "stationary"
                confidence = "high"
                reason     = "no_motion_detected"
            else:
                # Determine dominant axis
                if abs(avg_dx) > abs(avg_dy):
                    # Horizontal motion
                    # Optical-flow : scene moves RIGHT → camera moves LEFT
                    if avg_dx > 2.0:
                        direction = "moving_left"
                    elif avg_dx < -2.0:
                        direction = "moving_right"
                    else:
                        direction = "stationary"
                else:
                    # Vertical motion
                    # Scene moving DOWN → camera moving FORWARD (zooming in)
                    if avg_dy > 2.0:
                        direction = "moving_forward"
                    elif avg_dy < -2.0:
                        direction = "moving_backward"
                    else:
                        direction = "stationary"

                confidence = "high"
                reason     = "normal"

            # Scale pixel displacement to an approximate motion magnitude
            # using the conceptual focal length parameter
            magnitude = (abs(avg_dx) + abs(avg_dy)) / (self.focal_length / 100.0)

            estimate = {
                "direction":  direction,
                "magnitude":  round(magnitude, 4),
                "confidence": confidence,
                "reason":     reason,
                "avg_dx":     round(avg_dx, 3),
                "avg_dy":     round(avg_dy, 3)
            }

            self._latest = estimate
            self.pub.publish(String(data=json.dumps(estimate)))
            self.get_logger().info(f"VO → {direction} | conf={confidence}")

        except Exception as e:
            self.get_logger().error(f"VO callback error: {e}")

    
    def handle_service(self, request, response):
        """Return the most recent motion estimate as a JSON string."""
        response.success = True
        response.message = json.dumps(self._latest)
        return response


def main(args=None):
    rclpy.init(args=args)
    node = VisualOdometryNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
