// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "urg_node_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
urg_node_msgs__msg__Status__init(urg_node_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // operating_mode
  // area_number
  // error_status
  // error_code
  // lockout_status
  // ossd_1
  // ossd_2
  // warning_1
  // warning_2
  // ossd_3
  // ossd_4
  // distance
  // angle
  return true;
}

void
urg_node_msgs__msg__Status__fini(urg_node_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // operating_mode
  // area_number
  // error_status
  // error_code
  // lockout_status
  // ossd_1
  // ossd_2
  // warning_1
  // warning_2
  // ossd_3
  // ossd_4
  // distance
  // angle
}

bool
urg_node_msgs__msg__Status__are_equal(const urg_node_msgs__msg__Status * lhs, const urg_node_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // operating_mode
  if (lhs->operating_mode != rhs->operating_mode) {
    return false;
  }
  // area_number
  if (lhs->area_number != rhs->area_number) {
    return false;
  }
  // error_status
  if (lhs->error_status != rhs->error_status) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // lockout_status
  if (lhs->lockout_status != rhs->lockout_status) {
    return false;
  }
  // ossd_1
  if (lhs->ossd_1 != rhs->ossd_1) {
    return false;
  }
  // ossd_2
  if (lhs->ossd_2 != rhs->ossd_2) {
    return false;
  }
  // warning_1
  if (lhs->warning_1 != rhs->warning_1) {
    return false;
  }
  // warning_2
  if (lhs->warning_2 != rhs->warning_2) {
    return false;
  }
  // ossd_3
  if (lhs->ossd_3 != rhs->ossd_3) {
    return false;
  }
  // ossd_4
  if (lhs->ossd_4 != rhs->ossd_4) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
urg_node_msgs__msg__Status__copy(
  const urg_node_msgs__msg__Status * input,
  urg_node_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // operating_mode
  output->operating_mode = input->operating_mode;
  // area_number
  output->area_number = input->area_number;
  // error_status
  output->error_status = input->error_status;
  // error_code
  output->error_code = input->error_code;
  // lockout_status
  output->lockout_status = input->lockout_status;
  // ossd_1
  output->ossd_1 = input->ossd_1;
  // ossd_2
  output->ossd_2 = input->ossd_2;
  // warning_1
  output->warning_1 = input->warning_1;
  // warning_2
  output->warning_2 = input->warning_2;
  // ossd_3
  output->ossd_3 = input->ossd_3;
  // ossd_4
  output->ossd_4 = input->ossd_4;
  // distance
  output->distance = input->distance;
  // angle
  output->angle = input->angle;
  return true;
}

urg_node_msgs__msg__Status *
urg_node_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urg_node_msgs__msg__Status * msg = (urg_node_msgs__msg__Status *)allocator.allocate(sizeof(urg_node_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(urg_node_msgs__msg__Status));
  bool success = urg_node_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
urg_node_msgs__msg__Status__destroy(urg_node_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    urg_node_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
urg_node_msgs__msg__Status__Sequence__init(urg_node_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urg_node_msgs__msg__Status * data = NULL;

  if (size) {
    data = (urg_node_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(urg_node_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = urg_node_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        urg_node_msgs__msg__Status__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
urg_node_msgs__msg__Status__Sequence__fini(urg_node_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      urg_node_msgs__msg__Status__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

urg_node_msgs__msg__Status__Sequence *
urg_node_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  urg_node_msgs__msg__Status__Sequence * array = (urg_node_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(urg_node_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = urg_node_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
urg_node_msgs__msg__Status__Sequence__destroy(urg_node_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    urg_node_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
urg_node_msgs__msg__Status__Sequence__are_equal(const urg_node_msgs__msg__Status__Sequence * lhs, const urg_node_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!urg_node_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
urg_node_msgs__msg__Status__Sequence__copy(
  const urg_node_msgs__msg__Status__Sequence * input,
  urg_node_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(urg_node_msgs__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    urg_node_msgs__msg__Status * data =
      (urg_node_msgs__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!urg_node_msgs__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          urg_node_msgs__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!urg_node_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
