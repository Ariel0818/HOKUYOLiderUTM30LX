# generated from rosidl_generator_py/resource/_idl.py.em
# with input from urg_node_msgs:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NORMAL': 0,
        'SETTING': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('urg_node_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'urg_node_msgs.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NORMAL': cls.__constants['NORMAL'],
            'SETTING': cls.__constants['SETTING'],
        }

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_Status.__constants['NORMAL']

    @property
    def SETTING(self):
        """Message constant 'SETTING'."""
        return Metaclass_Status.__constants['SETTING']


class Status(metaclass=Metaclass_Status):
    """
    Message class 'Status'.

    Constants:
      NORMAL
      SETTING
    """

    __slots__ = [
        '_operating_mode',
        '_area_number',
        '_error_status',
        '_error_code',
        '_lockout_status',
        '_ossd_1',
        '_ossd_2',
        '_warning_1',
        '_warning_2',
        '_ossd_3',
        '_ossd_4',
        '_distance',
        '_angle',
    ]

    _fields_and_field_types = {
        'operating_mode': 'uint16',
        'area_number': 'uint16',
        'error_status': 'boolean',
        'error_code': 'uint16',
        'lockout_status': 'boolean',
        'ossd_1': 'boolean',
        'ossd_2': 'boolean',
        'warning_1': 'boolean',
        'warning_2': 'boolean',
        'ossd_3': 'boolean',
        'ossd_4': 'boolean',
        'distance': 'uint16',
        'angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.operating_mode = kwargs.get('operating_mode', int())
        self.area_number = kwargs.get('area_number', int())
        self.error_status = kwargs.get('error_status', bool())
        self.error_code = kwargs.get('error_code', int())
        self.lockout_status = kwargs.get('lockout_status', bool())
        self.ossd_1 = kwargs.get('ossd_1', bool())
        self.ossd_2 = kwargs.get('ossd_2', bool())
        self.warning_1 = kwargs.get('warning_1', bool())
        self.warning_2 = kwargs.get('warning_2', bool())
        self.ossd_3 = kwargs.get('ossd_3', bool())
        self.ossd_4 = kwargs.get('ossd_4', bool())
        self.distance = kwargs.get('distance', int())
        self.angle = kwargs.get('angle', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.operating_mode != other.operating_mode:
            return False
        if self.area_number != other.area_number:
            return False
        if self.error_status != other.error_status:
            return False
        if self.error_code != other.error_code:
            return False
        if self.lockout_status != other.lockout_status:
            return False
        if self.ossd_1 != other.ossd_1:
            return False
        if self.ossd_2 != other.ossd_2:
            return False
        if self.warning_1 != other.warning_1:
            return False
        if self.warning_2 != other.warning_2:
            return False
        if self.ossd_3 != other.ossd_3:
            return False
        if self.ossd_4 != other.ossd_4:
            return False
        if self.distance != other.distance:
            return False
        if self.angle != other.angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def operating_mode(self):
        """Message field 'operating_mode'."""
        return self._operating_mode

    @operating_mode.setter
    def operating_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operating_mode' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'operating_mode' field must be an unsigned integer in [0, 65535]"
        self._operating_mode = value

    @builtins.property
    def area_number(self):
        """Message field 'area_number'."""
        return self._area_number

    @area_number.setter
    def area_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'area_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'area_number' field must be an unsigned integer in [0, 65535]"
        self._area_number = value

    @builtins.property
    def error_status(self):
        """Message field 'error_status'."""
        return self._error_status

    @error_status.setter
    def error_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error_status' field must be of type 'bool'"
        self._error_status = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'error_code' field must be an unsigned integer in [0, 65535]"
        self._error_code = value

    @builtins.property
    def lockout_status(self):
        """Message field 'lockout_status'."""
        return self._lockout_status

    @lockout_status.setter
    def lockout_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lockout_status' field must be of type 'bool'"
        self._lockout_status = value

    @builtins.property
    def ossd_1(self):
        """Message field 'ossd_1'."""
        return self._ossd_1

    @ossd_1.setter
    def ossd_1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ossd_1' field must be of type 'bool'"
        self._ossd_1 = value

    @builtins.property
    def ossd_2(self):
        """Message field 'ossd_2'."""
        return self._ossd_2

    @ossd_2.setter
    def ossd_2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ossd_2' field must be of type 'bool'"
        self._ossd_2 = value

    @builtins.property
    def warning_1(self):
        """Message field 'warning_1'."""
        return self._warning_1

    @warning_1.setter
    def warning_1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'warning_1' field must be of type 'bool'"
        self._warning_1 = value

    @builtins.property
    def warning_2(self):
        """Message field 'warning_2'."""
        return self._warning_2

    @warning_2.setter
    def warning_2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'warning_2' field must be of type 'bool'"
        self._warning_2 = value

    @builtins.property
    def ossd_3(self):
        """Message field 'ossd_3'."""
        return self._ossd_3

    @ossd_3.setter
    def ossd_3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ossd_3' field must be of type 'bool'"
        self._ossd_3 = value

    @builtins.property
    def ossd_4(self):
        """Message field 'ossd_4'."""
        return self._ossd_4

    @ossd_4.setter
    def ossd_4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ossd_4' field must be of type 'bool'"
        self._ossd_4 = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'distance' field must be an unsigned integer in [0, 65535]"
        self._distance = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle = value
