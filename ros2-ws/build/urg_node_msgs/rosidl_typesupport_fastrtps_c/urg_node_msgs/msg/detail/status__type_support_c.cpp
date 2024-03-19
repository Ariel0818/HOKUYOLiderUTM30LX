// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "urg_node_msgs/msg/detail/status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "urg_node_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "urg_node_msgs/msg/detail/status__struct.h"
#include "urg_node_msgs/msg/detail/status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Status__ros_msg_type = urg_node_msgs__msg__Status;

static bool _Status__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  // Field name: operating_mode
  {
    cdr << ros_message->operating_mode;
  }

  // Field name: area_number
  {
    cdr << ros_message->area_number;
  }

  // Field name: error_status
  {
    cdr << (ros_message->error_status ? true : false);
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  // Field name: lockout_status
  {
    cdr << (ros_message->lockout_status ? true : false);
  }

  // Field name: ossd_1
  {
    cdr << (ros_message->ossd_1 ? true : false);
  }

  // Field name: ossd_2
  {
    cdr << (ros_message->ossd_2 ? true : false);
  }

  // Field name: warning_1
  {
    cdr << (ros_message->warning_1 ? true : false);
  }

  // Field name: warning_2
  {
    cdr << (ros_message->warning_2 ? true : false);
  }

  // Field name: ossd_3
  {
    cdr << (ros_message->ossd_3 ? true : false);
  }

  // Field name: ossd_4
  {
    cdr << (ros_message->ossd_4 ? true : false);
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  return true;
}

static bool _Status__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Status__ros_msg_type * ros_message = static_cast<_Status__ros_msg_type *>(untyped_ros_message);
  // Field name: operating_mode
  {
    cdr >> ros_message->operating_mode;
  }

  // Field name: area_number
  {
    cdr >> ros_message->area_number;
  }

  // Field name: error_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error_status = tmp ? true : false;
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  // Field name: lockout_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lockout_status = tmp ? true : false;
  }

  // Field name: ossd_1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ossd_1 = tmp ? true : false;
  }

  // Field name: ossd_2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ossd_2 = tmp ? true : false;
  }

  // Field name: warning_1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->warning_1 = tmp ? true : false;
  }

  // Field name: warning_2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->warning_2 = tmp ? true : false;
  }

  // Field name: ossd_3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ossd_3 = tmp ? true : false;
  }

  // Field name: ossd_4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ossd_4 = tmp ? true : false;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urg_node_msgs
size_t get_serialized_size_urg_node_msgs__msg__Status(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name operating_mode
  {
    size_t item_size = sizeof(ros_message->operating_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name area_number
  {
    size_t item_size = sizeof(ros_message->area_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_status
  {
    size_t item_size = sizeof(ros_message->error_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lockout_status
  {
    size_t item_size = sizeof(ros_message->lockout_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ossd_1
  {
    size_t item_size = sizeof(ros_message->ossd_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ossd_2
  {
    size_t item_size = sizeof(ros_message->ossd_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name warning_1
  {
    size_t item_size = sizeof(ros_message->warning_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name warning_2
  {
    size_t item_size = sizeof(ros_message->warning_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ossd_3
  {
    size_t item_size = sizeof(ros_message->ossd_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ossd_4
  {
    size_t item_size = sizeof(ros_message->ossd_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Status__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_urg_node_msgs__msg__Status(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_urg_node_msgs
size_t max_serialized_size_urg_node_msgs__msg__Status(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: operating_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: area_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: error_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lockout_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ossd_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ossd_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: warning_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: warning_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ossd_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ossd_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = urg_node_msgs__msg__Status;
    is_plain =
      (
      offsetof(DataType, angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Status__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_urg_node_msgs__msg__Status(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Status = {
  "urg_node_msgs::msg",
  "Status",
  _Status__cdr_serialize,
  _Status__cdr_deserialize,
  _Status__get_serialized_size,
  _Status__max_serialized_size
};

static rosidl_message_type_support_t _Status__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Status,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, urg_node_msgs, msg, Status)() {
  return &_Status__type_support;
}

#if defined(__cplusplus)
}
#endif
