#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


class CameraStreamNode(Node):

    def __init__(self):
        super().__init__('camera_stream_node')

        # Declare parameters: camera_source can be 0 (webcam) or a video file path
        self.declare_parameter('camera_source', 0)
        self.declare_parameter('frame_rate', 10.0)

        self.camera_source = self.get_parameter('camera_source').value
        self.frame_rate    = self.get_parameter('frame_rate').value

        # Publisher: sends raw BGR frames to the pipeline
        self.publisher_ = self.create_publisher(Image, '/camera_frames', 10)

        self.bridge = CvBridge()

        # Open the camera or video file
        self.cap = cv2.VideoCapture(self.camera_source)
        if not self.cap.isOpened():
            self.get_logger().error("Failed to open camera/video source")
        else:
            self.get_logger().info(f"Camera source opened: {self.camera_source}")

        # Timer drives the capture loop at the requested FPS
        self.timer = self.create_timer(1.0 / self.frame_rate, self.timer_callback)

    def timer_callback(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().warn("Frame not received – rewinding or end of file")
            # Rewind if it's a video file
            self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
            return

        # Convert OpenCV BGR image → ROS Image message and publish
        msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
        msg.header.stamp = self.get_clock().now().to_msg()
        self.publisher_.publish(msg)
        self.get_logger().debug("Frame published")

    def destroy_node(self):
        self.cap.release()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = CameraStreamNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
