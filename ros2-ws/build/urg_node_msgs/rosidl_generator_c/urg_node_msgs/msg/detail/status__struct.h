// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
enum
{
  urg_node_msgs__msg__Status__NORMAL = 0
};

/// Constant 'SETTING'.
enum
{
  urg_node_msgs__msg__Status__SETTING = 1
};

/// Struct defined in msg/Status in the package urg_node_msgs.
/**
  * Normal vs setting in the UAM manual.
 */
typedef struct urg_node_msgs__msg__Status
{
  uint16_t operating_mode;
  /// The configured area number the stop occurred in.
  uint16_t area_number;
  /// If the laser is reporting an error or not.
  bool error_status;
  /// The error code the laser is reporting.
  uint16_t error_code;
  /// Does the laser report that it is locked out.
  bool lockout_status;
  /// State of the different warning and safety zones
  bool ossd_1;
  bool ossd_2;
  bool warning_1;
  bool warning_2;
  bool ossd_3;
  bool ossd_4;
  /// Distance in mm the stop was reported at.
  uint16_t distance;
  /// The reported angle of the stop in deg.
  float angle;
} urg_node_msgs__msg__Status;

// Struct for a sequence of urg_node_msgs__msg__Status.
typedef struct urg_node_msgs__msg__Status__Sequence
{
  urg_node_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} urg_node_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // URG_NODE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
