// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scara_interfaces:srv/InvKin.idl
// generated code does not contain a copyright notice

#ifndef SCARA_INTERFACES__SRV__DETAIL__INV_KIN__BUILDER_HPP_
#define SCARA_INTERFACES__SRV__DETAIL__INV_KIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scara_interfaces/srv/detail/inv_kin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scara_interfaces
{

namespace srv
{

namespace builder
{

class Init_InvKin_Request_z
{
public:
  explicit Init_InvKin_Request_z(::scara_interfaces::srv::InvKin_Request & msg)
  : msg_(msg)
  {}
  ::scara_interfaces::srv::InvKin_Request z(::scara_interfaces::srv::InvKin_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_interfaces::srv::InvKin_Request msg_;
};

class Init_InvKin_Request_y
{
public:
  explicit Init_InvKin_Request_y(::scara_interfaces::srv::InvKin_Request & msg)
  : msg_(msg)
  {}
  Init_InvKin_Request_z y(::scara_interfaces::srv::InvKin_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_InvKin_Request_z(msg_);
  }

private:
  ::scara_interfaces::srv::InvKin_Request msg_;
};

class Init_InvKin_Request_x
{
public:
  Init_InvKin_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InvKin_Request_y x(::scara_interfaces::srv::InvKin_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_InvKin_Request_y(msg_);
  }

private:
  ::scara_interfaces::srv::InvKin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_interfaces::srv::InvKin_Request>()
{
  return scara_interfaces::srv::builder::Init_InvKin_Request_x();
}

}  // namespace scara_interfaces


namespace scara_interfaces
{

namespace srv
{

namespace builder
{

class Init_InvKin_Response_d3
{
public:
  explicit Init_InvKin_Response_d3(::scara_interfaces::srv::InvKin_Response & msg)
  : msg_(msg)
  {}
  ::scara_interfaces::srv::InvKin_Response d3(::scara_interfaces::srv::InvKin_Response::_d3_type arg)
  {
    msg_.d3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_interfaces::srv::InvKin_Response msg_;
};

class Init_InvKin_Response_t2
{
public:
  explicit Init_InvKin_Response_t2(::scara_interfaces::srv::InvKin_Response & msg)
  : msg_(msg)
  {}
  Init_InvKin_Response_d3 t2(::scara_interfaces::srv::InvKin_Response::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return Init_InvKin_Response_d3(msg_);
  }

private:
  ::scara_interfaces::srv::InvKin_Response msg_;
};

class Init_InvKin_Response_t1
{
public:
  Init_InvKin_Response_t1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InvKin_Response_t2 t1(::scara_interfaces::srv::InvKin_Response::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_InvKin_Response_t2(msg_);
  }

private:
  ::scara_interfaces::srv::InvKin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_interfaces::srv::InvKin_Response>()
{
  return scara_interfaces::srv::builder::Init_InvKin_Response_t1();
}

}  // namespace scara_interfaces

#endif  // SCARA_INTERFACES__SRV__DETAIL__INV_KIN__BUILDER_HPP_
