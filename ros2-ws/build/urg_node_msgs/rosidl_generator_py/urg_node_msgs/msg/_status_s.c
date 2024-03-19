// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from urg_node_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "urg_node_msgs/msg/detail/status__struct.h"
#include "urg_node_msgs/msg/detail/status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool urg_node_msgs__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("urg_node_msgs.msg._status.Status", full_classname_dest, 32) == 0);
  }
  urg_node_msgs__msg__Status * ros_message = _ros_message;
  {  // operating_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "operating_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operating_mode = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // area_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->area_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->error_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lockout_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "lockout_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lockout_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ossd_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ossd_1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ossd_1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ossd_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ossd_2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ossd_2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // warning_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->warning_1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // warning_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->warning_2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ossd_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ossd_3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ossd_3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ossd_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "ossd_4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ossd_4 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * urg_node_msgs__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("urg_node_msgs.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  urg_node_msgs__msg__Status * ros_message = (urg_node_msgs__msg__Status *)raw_ros_message;
  {  // operating_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operating_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operating_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->area_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->error_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lockout_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lockout_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lockout_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ossd_1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ossd_1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ossd_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ossd_2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ossd_2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ossd_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->warning_1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->warning_2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ossd_3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ossd_3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ossd_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ossd_4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ossd_4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ossd_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
