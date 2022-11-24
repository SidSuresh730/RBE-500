# generated from rosidl_generator_py/resource/_idl.py.em
# with input from scara_interfaces:srv/InvKin.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InvKin_Request(type):
    """Metaclass of message 'InvKin_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('scara_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_interfaces.srv.InvKin_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inv_kin__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inv_kin__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inv_kin__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inv_kin__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inv_kin__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InvKin_Request(metaclass=Metaclass_InvKin_Request):
    """Message class 'InvKin_Request'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'z': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InvKin_Response(type):
    """Metaclass of message 'InvKin_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('scara_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_interfaces.srv.InvKin_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inv_kin__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inv_kin__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inv_kin__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inv_kin__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inv_kin__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InvKin_Response(metaclass=Metaclass_InvKin_Response):
    """Message class 'InvKin_Response'."""

    __slots__ = [
        '_t1',
        '_t2',
        '_d3',
    ]

    _fields_and_field_types = {
        't1': 'double',
        't2': 'double',
        'd3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.t1 = kwargs.get('t1', float())
        self.t2 = kwargs.get('t2', float())
        self.d3 = kwargs.get('d3', float())

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
        if self.t1 != other.t1:
            return False
        if self.t2 != other.t2:
            return False
        if self.d3 != other.d3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def t1(self):
        """Message field 't1'."""
        return self._t1

    @t1.setter
    def t1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't1' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 't1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t1 = value

    @builtins.property
    def t2(self):
        """Message field 't2'."""
        return self._t2

    @t2.setter
    def t2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't2' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 't2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t2 = value

    @builtins.property
    def d3(self):
        """Message field 'd3'."""
        return self._d3

    @d3.setter
    def d3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd3' field must be of type 'float'"
            assert value >= -1.7976931348623157e+308 and value <= 1.7976931348623157e+308, \
                "The 'd3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._d3 = value


class Metaclass_InvKin(type):
    """Metaclass of service 'InvKin'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('scara_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_interfaces.srv.InvKin')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__inv_kin

            from scara_interfaces.srv import _inv_kin
            if _inv_kin.Metaclass_InvKin_Request._TYPE_SUPPORT is None:
                _inv_kin.Metaclass_InvKin_Request.__import_type_support__()
            if _inv_kin.Metaclass_InvKin_Response._TYPE_SUPPORT is None:
                _inv_kin.Metaclass_InvKin_Response.__import_type_support__()


class InvKin(metaclass=Metaclass_InvKin):
    from scara_interfaces.srv._inv_kin import InvKin_Request as Request
    from scara_interfaces.srv._inv_kin import InvKin_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
