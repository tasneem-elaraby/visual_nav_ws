#!/usr/bin/env python3

import json
import asyncio
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, ActionClient, CancelResponse, GoalResponse
from std_msgs.msg import String
from visual_navigation_interfaces.action import Navigate


class ActionExecutionNode(Node):

    def __init__(self):
        super().__init__('action_execution_node')

        # parameter for how long each action runs
        self.declare_parameter('action_duration', 1.0)
        self.action_duration = self.get_parameter('action_duration').value

        # listen to navigation decisions
        self.create_subscription(
            String,
            '/navigation_command',
            self.command_cb,
            10
        )

        # publish execution status
        self.pub_status = self.create_publisher(String, '/action_status', 10)

        # action server handles execution
        self._action_server = ActionServer(
            self,
            Navigate,
            '/navigate_action',
            execute_callback=self.execute_cb,
            goal_callback=self.goal_cb,
            cancel_callback=self.cancel_cb
        )

        # action client sends goals to the same server (for testing)
        self._action_client = ActionClient(self, Navigate, '/navigate_action')

        self.get_logger().info("Action node started")

    # receives command from navigation node
    def command_cb(self, msg):
        try:
            data = json.loads(msg.data)
            command = data.get('command', 'STOP')

            self.get_logger().info(f"Received command: {command}")

            self.send_goal(command)

        except Exception as e:
            self.get_logger().error(f"Command error: {e}")

    # send action goal
    def send_goal(self, command):

        if not self._action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().warn("Action server not ready")
            return

        goal_msg = Navigate.Goal()
        goal_msg.command = command

        self.get_logger().info(f"Sending goal: {command}")

        self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_cb
        )

    # receive feedback during execution
    def feedback_cb(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f"Feedback: {feedback.status}")

    # accept incoming goals
    def goal_cb(self, goal_request):
        self.get_logger().info(f"Goal received: {goal_request.command}")
        return GoalResponse.ACCEPT

    # handle cancel request
    def cancel_cb(self, goal_handle):
        self.get_logger().info("Cancel requested")
        return CancelResponse.ACCEPT

    # main execution logic
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
                return result

            feedback.status = f"{description} ({elapsed:.1f}s)"
            goal_handle.publish_feedback(feedback)

            await asyncio.sleep(step)
            elapsed += step

        # publish completion status
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
