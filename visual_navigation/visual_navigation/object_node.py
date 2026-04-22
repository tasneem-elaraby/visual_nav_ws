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

        # Minimum confidence to accept a detection
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

        self.bridge = CvBridge()

        # Load model
        self.model = YOLO('yolov8n.pt')
        self.get_logger().info("Object Detection Node started with YOLOv8n")

    def image_callback(self, msg):
        # Convert ROS Image → OpenCV BGR
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # Run inference; verbose=False suppresses per-frame console output
        results = self.model(frame, verbose=False)

        detections = []
        for r in results:
            for box in r.boxes:
                conf = float(box.conf[0])
                if conf < self.conf_threshold:
                    continue

                cls_id = int(box.cls[0])
                label  = self.model.names[cls_id]
                x1, y1, x2, y2 = map(int, box.xyxy[0])

                # Calculate center point and approximate distance class
                cx = (x1 + x2) // 2
                cy = (y1 + y2) // 2
                area = (x2 - x1) * (y2 - y1)

                detections.append({
                    "label":      label,
                    "confidence": round(conf, 3),
                    "bbox":       [x1, y1, x2, y2],
                    "center":     [cx, cy],
                    "area":       area
                })

                # Draw bounding box and label on the frame for visualisation
                cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)
                cv2.putText(frame, f"{label} {conf:.2f}",
                            (x1, y1 - 5),
                            cv2.FONT_HERSHEY_SIMPLEX,
                            0.5, (0, 255, 0), 2)

        # Publish detections as a JSON string
        msg_out = String()
        msg_out.data = json.dumps(detections)
        self.publisher_.publish(msg_out)

        # Show annotated frame in a debug window
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
