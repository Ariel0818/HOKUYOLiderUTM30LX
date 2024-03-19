// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef URG_NODE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define URG_NODE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "urg_node_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace urg_node_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_angle
{
public:
  explicit Init_Status_angle(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::urg_node_msgs::msg::Status angle(::urg_node_msgs::msg::Status::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_distance
{
public:
  explicit Init_Status_distance(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_angle distance(::urg_node_msgs::msg::Status::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Status_angle(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_ossd_4
{
public:
  explicit Init_Status_ossd_4(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_distance ossd_4(::urg_node_msgs::msg::Status::_ossd_4_type arg)
  {
    msg_.ossd_4 = std::move(arg);
    return Init_Status_distance(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_ossd_3
{
public:
  explicit Init_Status_ossd_3(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ossd_4 ossd_3(::urg_node_msgs::msg::Status::_ossd_3_type arg)
  {
    msg_.ossd_3 = std::move(arg);
    return Init_Status_ossd_4(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_warning_2
{
public:
  explicit Init_Status_warning_2(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ossd_3 warning_2(::urg_node_msgs::msg::Status::_warning_2_type arg)
  {
    msg_.warning_2 = std::move(arg);
    return Init_Status_ossd_3(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_warning_1
{
public:
  explicit Init_Status_warning_1(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_warning_2 warning_1(::urg_node_msgs::msg::Status::_warning_1_type arg)
  {
    msg_.warning_1 = std::move(arg);
    return Init_Status_warning_2(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_ossd_2
{
public:
  explicit Init_Status_ossd_2(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_warning_1 ossd_2(::urg_node_msgs::msg::Status::_ossd_2_type arg)
  {
    msg_.ossd_2 = std::move(arg);
    return Init_Status_warning_1(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_ossd_1
{
public:
  explicit Init_Status_ossd_1(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ossd_2 ossd_1(::urg_node_msgs::msg::Status::_ossd_1_type arg)
  {
    msg_.ossd_1 = std::move(arg);
    return Init_Status_ossd_2(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_lockout_status
{
public:
  explicit Init_Status_lockout_status(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_ossd_1 lockout_status(::urg_node_msgs::msg::Status::_lockout_status_type arg)
  {
    msg_.lockout_status = std::move(arg);
    return Init_Status_ossd_1(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_error_code
{
public:
  explicit Init_Status_error_code(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_lockout_status error_code(::urg_node_msgs::msg::Status::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Status_lockout_status(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_error_status
{
public:
  explicit Init_Status_error_status(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_error_code error_status(::urg_node_msgs::msg::Status::_error_status_type arg)
  {
    msg_.error_status = std::move(arg);
    return Init_Status_error_code(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_area_number
{
public:
  explicit Init_Status_area_number(::urg_node_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_error_status area_number(::urg_node_msgs::msg::Status::_area_number_type arg)
  {
    msg_.area_number = std::move(arg);
    return Init_Status_error_status(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

class Init_Status_operating_mode
{
public:
  Init_Status_operating_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_area_number operating_mode(::urg_node_msgs::msg::Status::_operating_mode_type arg)
  {
    msg_.operating_mode = std::move(arg);
    return Init_Status_area_number(msg_);
  }

private:
  ::urg_node_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::urg_node_msgs::msg::Status>()
{
  return urg_node_msgs::msg::builder::Init_Status_operating_mode();
}

}  // namespace urg_node_msgs

#endif  // URG_NODE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
