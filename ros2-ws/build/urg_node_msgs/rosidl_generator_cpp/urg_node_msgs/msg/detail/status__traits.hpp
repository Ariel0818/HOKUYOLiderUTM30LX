// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef URG_NODE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define URG_NODE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "urg_node_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace urg_node_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: operating_mode
  {
    out << "operating_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operating_mode, out);
    out << ", ";
  }

  // member: area_number
  {
    out << "area_number: ";
    rosidl_generator_traits::value_to_yaml(msg.area_number, out);
    out << ", ";
  }

  // member: error_status
  {
    out << "error_status: ";
    rosidl_generator_traits::value_to_yaml(msg.error_status, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: lockout_status
  {
    out << "lockout_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lockout_status, out);
    out << ", ";
  }

  // member: ossd_1
  {
    out << "ossd_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ossd_1, out);
    out << ", ";
  }

  // member: ossd_2
  {
    out << "ossd_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ossd_2, out);
    out << ", ";
  }

  // member: warning_1
  {
    out << "warning_1: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_1, out);
    out << ", ";
  }

  // member: warning_2
  {
    out << "warning_2: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_2, out);
    out << ", ";
  }

  // member: ossd_3
  {
    out << "ossd_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ossd_3, out);
    out << ", ";
  }

  // member: ossd_4
  {
    out << "ossd_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ossd_4, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operating_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operating_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operating_mode, out);
    out << "\n";
  }

  // member: area_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_number: ";
    rosidl_generator_traits::value_to_yaml(msg.area_number, out);
    out << "\n";
  }

  // member: error_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_status: ";
    rosidl_generator_traits::value_to_yaml(msg.error_status, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: lockout_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lockout_status: ";
    rosidl_generator_traits::value_to_yaml(msg.lockout_status, out);
    out << "\n";
  }

  // member: ossd_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ossd_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ossd_1, out);
    out << "\n";
  }

  // member: ossd_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ossd_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ossd_2, out);
    out << "\n";
  }

  // member: warning_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_1: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_1, out);
    out << "\n";
  }

  // member: warning_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_2: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_2, out);
    out << "\n";
  }

  // member: ossd_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ossd_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ossd_3, out);
    out << "\n";
  }

  // member: ossd_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ossd_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ossd_4, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace urg_node_msgs

namespace rosidl_generator_traits
{

[[deprecated("use urg_node_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const urg_node_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  urg_node_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use urg_node_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const urg_node_msgs::msg::Status & msg)
{
  return urg_node_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<urg_node_msgs::msg::Status>()
{
  return "urg_node_msgs::msg::Status";
}

template<>
inline const char * name<urg_node_msgs::msg::Status>()
{
  return "urg_node_msgs/msg/Status";
}

template<>
struct has_fixed_size<urg_node_msgs::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<urg_node_msgs::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<urg_node_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // URG_NODE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
