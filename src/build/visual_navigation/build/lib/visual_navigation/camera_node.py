#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


class CameraStreamNode(Node):
    def __init__(self):
        super().__init__('camera_stream_node')

        # Parameters 
        self.declare_parameter('camera_source', '0')   # '0' = webcam, or file path
        self.declare_parameter('frame_rate', 10)       # FPS

        # ✅ Correct way to read parameters
        camera_source = self.get_parameter('camera_source').value
        frame_rate    = self.get_parameter('frame_rate').value

        # ✅ Safety check (prevents crash)
        if frame_rate <= 0:
            self.get_logger().warn("Invalid frame_rate → using default 10 FPS")
            frame_rate = 10

        # Publisher 
        self.publisher_ = self.create_publisher(Image, '/camera_frames', 10)

        # OpenCV capture 
        if str(camera_source).isdigit():
            self.cap = cv2.VideoCapture(int(camera_source))
        else:
            self.cap = cv2.VideoCapture(camera_source)

        if not self.cap.isOpened():
            self.get_logger().error(f'Cannot open camera source: {camera_source}')
            raise RuntimeError('Camera source unavailable')

        self.bridge = CvBridge()

        # Timer publishes at the requested frame rate
        period = 1.0 / frame_rate
        self.timer = self.create_timer(period, self.publish_frame)

        self.get_logger().info(
            f'CameraStreamNode started | source={camera_source} | fps={frame_rate}'
        )

    def publish_frame(self):
        ret, frame = self.cap.read()

        if not ret:
            self.get_logger().warn('Failed to grab frame – looping or restarting.')
            self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
            return

        # Convert to ROS image
        msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')

        # Add timestamp
        msg.header.stamp = self.get_clock().now().to_msg()

        # Publish
        self.publisher_.publish(msg)

    def destroy_node(self):
        # ✅ Clean resource release
        if hasattr(self, 'cap'):
            self.cap.release()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)

    node = CameraStreamNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        cv2.destroyAllWindows()
        rclpy.shutdown()


if __name__ == '__main__':
    main()