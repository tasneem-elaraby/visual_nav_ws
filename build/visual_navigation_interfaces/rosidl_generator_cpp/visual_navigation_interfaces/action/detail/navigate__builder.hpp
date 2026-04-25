// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from visual_navigation_interfaces:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "visual_navigation_interfaces/action/navigate.hpp"


#ifndef VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
#define VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "visual_navigation_interfaces/action/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_Goal_command
{
public:
  Init_Navigate_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::visual_navigation_interfaces::action::Navigate_Goal command(::visual_navigation_interfaces::action::Navigate_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_Goal>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_Goal_command();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_Result_success
{
public:
  Init_Navigate_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::visual_navigation_interfaces::action::Navigate_Result success(::visual_navigation_interfaces::action::Navigate_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_Result>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_Result_success();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_Feedback_status
{
public:
  Init_Navigate_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::visual_navigation_interfaces::action::Navigate_Feedback status(::visual_navigation_interfaces::action::Navigate_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_Feedback>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_Feedback_status();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Request_goal
{
public:
  explicit Init_Navigate_SendGoal_Request_goal(::visual_navigation_interfaces::action::Navigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Request goal(::visual_navigation_interfaces::action::Navigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Request msg_;
};

class Init_Navigate_SendGoal_Request_goal_id
{
public:
  Init_Navigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Request_goal goal_id(::visual_navigation_interfaces::action::Navigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_SendGoal_Request_goal(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_SendGoal_Request>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_SendGoal_Request_goal_id();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Response_stamp
{
public:
  explicit Init_Navigate_SendGoal_Response_stamp(::visual_navigation_interfaces::action::Navigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Response stamp(::visual_navigation_interfaces::action::Navigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Response msg_;
};

class Init_Navigate_SendGoal_Response_accepted
{
public:
  Init_Navigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Response_stamp accepted(::visual_navigation_interfaces::action::Navigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Navigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_SendGoal_Response>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_SendGoal_Response_accepted();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Event_response
{
public:
  explicit Init_Navigate_SendGoal_Event_response(::visual_navigation_interfaces::action::Navigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Event response(::visual_navigation_interfaces::action::Navigate_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Event msg_;
};

class Init_Navigate_SendGoal_Event_request
{
public:
  explicit Init_Navigate_SendGoal_Event_request(::visual_navigation_interfaces::action::Navigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Navigate_SendGoal_Event_response request(::visual_navigation_interfaces::action::Navigate_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigate_SendGoal_Event_response(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Event msg_;
};

class Init_Navigate_SendGoal_Event_info
{
public:
  Init_Navigate_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Event_request info(::visual_navigation_interfaces::action::Navigate_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigate_SendGoal_Event_request(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_SendGoal_Event>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_SendGoal_Event_info();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Request_goal_id
{
public:
  Init_Navigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::visual_navigation_interfaces::action::Navigate_GetResult_Request goal_id(::visual_navigation_interfaces::action::Navigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_GetResult_Request>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_GetResult_Request_goal_id();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Response_result
{
public:
  explicit Init_Navigate_GetResult_Response_result(::visual_navigation_interfaces::action::Navigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::visual_navigation_interfaces::action::Navigate_GetResult_Response result(::visual_navigation_interfaces::action::Navigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_GetResult_Response msg_;
};

class Init_Navigate_GetResult_Response_status
{
public:
  Init_Navigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Response_result status(::visual_navigation_interfaces::action::Navigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Navigate_GetResult_Response_result(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_GetResult_Response>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_GetResult_Response_status();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Event_response
{
public:
  explicit Init_Navigate_GetResult_Event_response(::visual_navigation_interfaces::action::Navigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::visual_navigation_interfaces::action::Navigate_GetResult_Event response(::visual_navigation_interfaces::action::Navigate_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_GetResult_Event msg_;
};

class Init_Navigate_GetResult_Event_request
{
public:
  explicit Init_Navigate_GetResult_Event_request(::visual_navigation_interfaces::action::Navigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Navigate_GetResult_Event_response request(::visual_navigation_interfaces::action::Navigate_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigate_GetResult_Event_response(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_GetResult_Event msg_;
};

class Init_Navigate_GetResult_Event_info
{
public:
  Init_Navigate_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Event_request info(::visual_navigation_interfaces::action::Navigate_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigate_GetResult_Event_request(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_GetResult_Event>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_GetResult_Event_info();
}

}  // namespace visual_navigation_interfaces


namespace visual_navigation_interfaces
{

namespace action
{

namespace builder
{

class Init_Navigate_FeedbackMessage_feedback
{
public:
  explicit Init_Navigate_FeedbackMessage_feedback(::visual_navigation_interfaces::action::Navigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::visual_navigation_interfaces::action::Navigate_FeedbackMessage feedback(::visual_navigation_interfaces::action::Navigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_FeedbackMessage msg_;
};

class Init_Navigate_FeedbackMessage_goal_id
{
public:
  Init_Navigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_FeedbackMessage_feedback goal_id(::visual_navigation_interfaces::action::Navigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::visual_navigation_interfaces::action::Navigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::visual_navigation_interfaces::action::Navigate_FeedbackMessage>()
{
  return visual_navigation_interfaces::action::builder::Init_Navigate_FeedbackMessage_goal_id();
}

}  // namespace visual_navigation_interfaces

#endif  // VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
