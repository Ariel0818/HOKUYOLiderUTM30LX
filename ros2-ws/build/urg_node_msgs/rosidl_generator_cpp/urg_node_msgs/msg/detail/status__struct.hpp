// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__urg_node_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__urg_node_msgs__msg__Status __declspec(deprecated)
#endif

namespace urg_node_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operating_mode = 0;
      this->area_number = 0;
      this->error_status = false;
      this->error_code = 0;
      this->lockout_status = false;
      this->ossd_1 = false;
      this->ossd_2 = false;
      this->warning_1 = false;
      this->warning_2 = false;
      this->ossd_3 = false;
      this->ossd_4 = false;
      this->distance = 0;
      this->angle = 0.0f;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operating_mode = 0;
      this->area_number = 0;
      this->error_status = false;
      this->error_code = 0;
      this->lockout_status = false;
      this->ossd_1 = false;
      this->ossd_2 = false;
      this->warning_1 = false;
      this->warning_2 = false;
      this->ossd_3 = false;
      this->ossd_4 = false;
      this->distance = 0;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _operating_mode_type =
    uint16_t;
  _operating_mode_type operating_mode;
  using _area_number_type =
    uint16_t;
  _area_number_type area_number;
  using _error_status_type =
    bool;
  _error_status_type error_status;
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;
  using _lockout_status_type =
    bool;
  _lockout_status_type lockout_status;
  using _ossd_1_type =
    bool;
  _ossd_1_type ossd_1;
  using _ossd_2_type =
    bool;
  _ossd_2_type ossd_2;
  using _warning_1_type =
    bool;
  _warning_1_type warning_1;
  using _warning_2_type =
    bool;
  _warning_2_type warning_2;
  using _ossd_3_type =
    bool;
  _ossd_3_type ossd_3;
  using _ossd_4_type =
    bool;
  _ossd_4_type ossd_4;
  using _distance_type =
    uint16_t;
  _distance_type distance;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__operating_mode(
    const uint16_t & _arg)
  {
    this->operating_mode = _arg;
    return *this;
  }
  Type & set__area_number(
    const uint16_t & _arg)
  {
    this->area_number = _arg;
    return *this;
  }
  Type & set__error_status(
    const bool & _arg)
  {
    this->error_status = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__lockout_status(
    const bool & _arg)
  {
    this->lockout_status = _arg;
    return *this;
  }
  Type & set__ossd_1(
    const bool & _arg)
  {
    this->ossd_1 = _arg;
    return *this;
  }
  Type & set__ossd_2(
    const bool & _arg)
  {
    this->ossd_2 = _arg;
    return *this;
  }
  Type & set__warning_1(
    const bool & _arg)
  {
    this->warning_1 = _arg;
    return *this;
  }
  Type & set__warning_2(
    const bool & _arg)
  {
    this->warning_2 = _arg;
    return *this;
  }
  Type & set__ossd_3(
    const bool & _arg)
  {
    this->ossd_3 = _arg;
    return *this;
  }
  Type & set__ossd_4(
    const bool & _arg)
  {
    this->ossd_4 = _arg;
    return *this;
  }
  Type & set__distance(
    const uint16_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t NORMAL =
    0u;
  static constexpr uint16_t SETTING =
    1u;

  // pointer types
  using RawPtr =
    urg_node_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const urg_node_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<urg_node_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<urg_node_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      urg_node_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<urg_node_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      urg_node_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<urg_node_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<urg_node_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<urg_node_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__urg_node_msgs__msg__Status
    std::shared_ptr<urg_node_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__urg_node_msgs__msg__Status
    std::shared_ptr<urg_node_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->operating_mode != other.operating_mode) {
      return false;
    }
    if (this->area_number != other.area_number) {
      return false;
    }
    if (this->error_status != other.error_status) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->lockout_status != other.lockout_status) {
      return false;
    }
    if (this->ossd_1 != other.ossd_1) {
      return false;
    }
    if (this->ossd_2 != other.ossd_2) {
      return false;
    }
    if (this->warning_1 != other.warning_1) {
      return false;
    }
    if (this->warning_2 != other.warning_2) {
      return false;
    }
    if (this->ossd_3 != other.ossd_3) {
      return false;
    }
    if (this->ossd_4 != other.ossd_4) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  urg_node_msgs::msg::Status_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Status_<ContainerAllocator>::NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Status_<ContainerAllocator>::SETTING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace urg_node_msgs

#endif  // URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
