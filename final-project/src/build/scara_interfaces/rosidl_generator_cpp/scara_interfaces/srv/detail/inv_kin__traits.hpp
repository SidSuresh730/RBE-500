// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scara_interfaces:srv/InvKin.idl
// generated code does not contain a copyright notice

#ifndef SCARA_INTERFACES__SRV__DETAIL__INV_KIN__TRAITS_HPP_
#define SCARA_INTERFACES__SRV__DETAIL__INV_KIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "scara_interfaces/srv/detail/inv_kin__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace scara_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InvKin_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InvKin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InvKin_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace scara_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use scara_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const scara_interfaces::srv::InvKin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  scara_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scara_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const scara_interfaces::srv::InvKin_Request & msg)
{
  return scara_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scara_interfaces::srv::InvKin_Request>()
{
  return "scara_interfaces::srv::InvKin_Request";
}

template<>
inline const char * name<scara_interfaces::srv::InvKin_Request>()
{
  return "scara_interfaces/srv/InvKin_Request";
}

template<>
struct has_fixed_size<scara_interfaces::srv::InvKin_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scara_interfaces::srv::InvKin_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scara_interfaces::srv::InvKin_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace scara_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const InvKin_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: t1
  {
    out << "t1: ";
    rosidl_generator_traits::value_to_yaml(msg.t1, out);
    out << ", ";
  }

  // member: t2
  {
    out << "t2: ";
    rosidl_generator_traits::value_to_yaml(msg.t2, out);
    out << ", ";
  }

  // member: d3
  {
    out << "d3: ";
    rosidl_generator_traits::value_to_yaml(msg.d3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InvKin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t1: ";
    rosidl_generator_traits::value_to_yaml(msg.t1, out);
    out << "\n";
  }

  // member: t2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t2: ";
    rosidl_generator_traits::value_to_yaml(msg.t2, out);
    out << "\n";
  }

  // member: d3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d3: ";
    rosidl_generator_traits::value_to_yaml(msg.d3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InvKin_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace scara_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use scara_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const scara_interfaces::srv::InvKin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  scara_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scara_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const scara_interfaces::srv::InvKin_Response & msg)
{
  return scara_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scara_interfaces::srv::InvKin_Response>()
{
  return "scara_interfaces::srv::InvKin_Response";
}

template<>
inline const char * name<scara_interfaces::srv::InvKin_Response>()
{
  return "scara_interfaces/srv/InvKin_Response";
}

template<>
struct has_fixed_size<scara_interfaces::srv::InvKin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scara_interfaces::srv::InvKin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scara_interfaces::srv::InvKin_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scara_interfaces::srv::InvKin>()
{
  return "scara_interfaces::srv::InvKin";
}

template<>
inline const char * name<scara_interfaces::srv::InvKin>()
{
  return "scara_interfaces/srv/InvKin";
}

template<>
struct has_fixed_size<scara_interfaces::srv::InvKin>
  : std::integral_constant<
    bool,
    has_fixed_size<scara_interfaces::srv::InvKin_Request>::value &&
    has_fixed_size<scara_interfaces::srv::InvKin_Response>::value
  >
{
};

template<>
struct has_bounded_size<scara_interfaces::srv::InvKin>
  : std::integral_constant<
    bool,
    has_bounded_size<scara_interfaces::srv::InvKin_Request>::value &&
    has_bounded_size<scara_interfaces::srv::InvKin_Response>::value
  >
{
};

template<>
struct is_service<scara_interfaces::srv::InvKin>
  : std::true_type
{
};

template<>
struct is_service_request<scara_interfaces::srv::InvKin_Request>
  : std::true_type
{
};

template<>
struct is_service_response<scara_interfaces::srv::InvKin_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SCARA_INTERFACES__SRV__DETAIL__INV_KIN__TRAITS_HPP_
