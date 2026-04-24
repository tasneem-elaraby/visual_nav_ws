// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visual_navigation_interfaces:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "visual_navigation_interfaces/action/navigate.h"


#ifndef VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__STRUCT_H_
#define VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_Goal
{
  rosidl_runtime_c__String command;
} visual_navigation_interfaces__action__Navigate_Goal;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_Goal.
typedef struct visual_navigation_interfaces__action__Navigate_Goal__Sequence
{
  visual_navigation_interfaces__action__Navigate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_Result
{
  bool success;
} visual_navigation_interfaces__action__Navigate_Result;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_Result.
typedef struct visual_navigation_interfaces__action__Navigate_Result__Sequence
{
  visual_navigation_interfaces__action__Navigate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_Feedback
{
  rosidl_runtime_c__String status;
} visual_navigation_interfaces__action__Navigate_Feedback;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_Feedback.
typedef struct visual_navigation_interfaces__action__Navigate_Feedback__Sequence
{
  visual_navigation_interfaces__action__Navigate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "visual_navigation_interfaces/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  visual_navigation_interfaces__action__Navigate_Goal goal;
} visual_navigation_interfaces__action__Navigate_SendGoal_Request;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_SendGoal_Request.
typedef struct visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence
{
  visual_navigation_interfaces__action__Navigate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} visual_navigation_interfaces__action__Navigate_SendGoal_Response;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_SendGoal_Response.
typedef struct visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence
{
  visual_navigation_interfaces__action__Navigate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  visual_navigation_interfaces__action__Navigate_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  visual_navigation_interfaces__action__Navigate_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence request;
  visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence response;
} visual_navigation_interfaces__action__Navigate_SendGoal_Event;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_SendGoal_Event.
typedef struct visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence
{
  visual_navigation_interfaces__action__Navigate_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} visual_navigation_interfaces__action__Navigate_GetResult_Request;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_GetResult_Request.
typedef struct visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence
{
  visual_navigation_interfaces__action__Navigate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "visual_navigation_interfaces/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_GetResult_Response
{
  int8_t status;
  visual_navigation_interfaces__action__Navigate_Result result;
} visual_navigation_interfaces__action__Navigate_GetResult_Response;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_GetResult_Response.
typedef struct visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence
{
  visual_navigation_interfaces__action__Navigate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  visual_navigation_interfaces__action__Navigate_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  visual_navigation_interfaces__action__Navigate_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence request;
  visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence response;
} visual_navigation_interfaces__action__Navigate_GetResult_Event;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_GetResult_Event.
typedef struct visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence
{
  visual_navigation_interfaces__action__Navigate_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "visual_navigation_interfaces/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package visual_navigation_interfaces.
typedef struct visual_navigation_interfaces__action__Navigate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  visual_navigation_interfaces__action__Navigate_Feedback feedback;
} visual_navigation_interfaces__action__Navigate_FeedbackMessage;

// Struct for a sequence of visual_navigation_interfaces__action__Navigate_FeedbackMessage.
typedef struct visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence
{
  visual_navigation_interfaces__action__Navigate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__STRUCT_H_
