#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String
from cv_bridge import CvBridge
import cv2
import json
from ultralytics import YOLO


class ObjectDetectionNode(Node):
    def __init__(self):
        super().__init__('object_detection_node')

        # Parameters
        self.declare_parameter('confidence_threshold', 0.5)
        self.conf_threshold = self.get_parameter('confidence_threshold').value

        # Subscriber
        self.subscription = self.create_subscription(
            Image,
            '/camera_frames',
            self.image_callback,
            10
        )

        # Publisher
        self.publisher_ = self.create_publisher(String, '/object_data', 10)

        # CV Bridge
        self.bridge = CvBridge()

        # Load YOLO model (lightweight)
        self.model = YOLO('yolov8n.pt')

        self.get_logger().info("✅ Object Detection Node Started")

    def image_callback(self, msg):
        # Convert ROS → OpenCV
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # Run YOLO inference
        results = self.model(frame, verbose=False)

        detections = []

        for r in results:
            boxes = r.boxes

            for box in boxes:
                conf = float(box.conf[0])
                if conf < self.conf_threshold:
                    continue

                cls_id = int(box.cls[0])
                label = self.model.names[cls_id]

                x1, y1, x2, y2 = map(int, box.xyxy[0])

                detections.append({
                    "label": label,
                    "confidence": conf,
                    "bbox": [x1, y1, x2, y2]
                })

                # Draw (optional visualization)
                cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)
                cv2.putText(frame, f"{label} {conf:.2f}",
                            (x1, y1 - 5),
                            cv2.FONT_HERSHEY_SIMPLEX,
                            0.5, (0, 255, 0), 2)

        # Convert detections to JSON string
        msg_out = String()
        msg_out.data = json.dumps(detections)

        # Publish
        self.publisher_.publish(msg_out)

        # Optional debug window
        cv2.imshow("YOLO Detection", frame)
        cv2.waitKey(1)


def main(args=None):
    rclpy.init(args=args)

    node = ObjectDetectionNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    cv2.destroyAllWindows()
    rclpy.shutdown()


if __name__ == '__main__':
    main()