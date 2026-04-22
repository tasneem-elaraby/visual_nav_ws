#!/usr/bin/env python3

import json
import time
import asyncio
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from std_msgs.msg import String
from visual_navigation_interfaces.action import Navigate


class ActionExecutionNode(Node):

    def __init__(self):
        super().__init__('action_execution_node')

        # Parameter
        self.declare_parameter('action_duration', 1.0)
        self.action_duration = self.get_parameter('action_duration').value

        # Subscriber
        self.create_subscription(
            String,
            '/navigation_command',
            self.command_cb,
            10
        )

        # Publisher
        self.pub_status = self.create_publisher(String, '/action_status', 10)

        #  Action Server 
        self._action_server = ActionServer(
            self,
            Navigate,
            '/navigate_action',
            execute_callback=self.execute_cb,
            goal_callback=self.goal_cb,
            cancel_callback=self.cancel_cb
        )

        self._current_command = "STOP"

        self.get_logger().info("Action Execution Node started")

    
    def command_cb(self, msg):
        try:
            data = json.loads(msg.data)
            self._current_command = data.get('command', 'STOP')

            self.get_logger().info(f"Received command: {self._current_command}")

            # Acknowledge
            self.pub_status.publish(String(data=json.dumps({
                "status": "received",
                "command": self._current_command
            })))

        except Exception as e:
            self.get_logger().error(f"Command callback error: {e}")

    
    def goal_cb(self, goal_request):
        self.get_logger().info(f"Goal received: {goal_request.command}")
        return GoalResponse.ACCEPT

    def cancel_cb(self, goal_handle):
        self.get_logger().info("Cancel requested")
        return CancelResponse.ACCEPT

    
    async def execute_cb(self, goal_handle):

        command = goal_handle.request.command
        self.get_logger().info(f"Executing: {command}")

        feedback = Navigate.Feedback()
        result = Navigate.Result()

        action_map = {
            "MOVE_LEFT": "Steering LEFT",
            "MOVE_RIGHT": "Steering RIGHT",
            "MOVE_FORWARD": "Moving FORWARD",
            "STOP": "STOPPING",
            "STATIONARY": "Idle"
        }

        description = action_map.get(command, "Unknown")

        elapsed = 0.0
        step = 0.5

        while elapsed < self.action_duration:

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info("Action cancelled")
                return result

            feedback.status = f"{description} ({elapsed:.1f}s)"
            goal_handle.publish_feedback(feedback)

            await asyncio.sleep(step)
            elapsed += step

        # Publish completion
        self.pub_status.publish(String(data=json.dumps({
            "status": "completed",
            "command": command
        })))

        result.success = True
        goal_handle.succeed()

        self.get_logger().info("Action completed")

        return result


def main(args=None):
    rclpy.init(args=args)
    node = ActionExecutionNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()