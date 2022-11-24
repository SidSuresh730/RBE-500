// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scara_interfaces:srv/InvKin.idl
// generated code does not contain a copyright notice

#ifndef SCARA_INTERFACES__SRV__DETAIL__INV_KIN__STRUCT_HPP_
#define SCARA_INTERFACES__SRV__DETAIL__INV_KIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__scara_interfaces__srv__InvKin_Request __attribute__((deprecated))
#else
# define DEPRECATED__scara_interfaces__srv__InvKin_Request __declspec(deprecated)
#endif

namespace scara_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InvKin_Request_
{
  using Type = InvKin_Request_<ContainerAllocator>;

  explicit InvKin_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit InvKin_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_interfaces::srv::InvKin_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_interfaces::srv::InvKin_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_interfaces::srv::InvKin_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_interfaces::srv::InvKin_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_interfaces::srv::InvKin_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_interfaces::srv::InvKin_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_interfaces::srv::InvKin_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_interfaces::srv::InvKin_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_interfaces::srv::InvKin_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_interfaces::srv::InvKin_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_interfaces__srv__InvKin_Request
    std::shared_ptr<scara_interfaces::srv::InvKin_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_interfaces__srv__InvKin_Request
    std::shared_ptr<scara_interfaces::srv::InvKin_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InvKin_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const InvKin_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InvKin_Request_

// alias to use template instance with default allocator
using InvKin_Request =
  scara_interfaces::srv::InvKin_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scara_interfaces


#ifndef _WIN32
# define DEPRECATED__scara_interfaces__srv__InvKin_Response __attribute__((deprecated))
#else
# define DEPRECATED__scara_interfaces__srv__InvKin_Response __declspec(deprecated)
#endif

namespace scara_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InvKin_Response_
{
  using Type = InvKin_Response_<ContainerAllocator>;

  explicit InvKin_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t1 = 0.0;
      this->t2 = 0.0;
      this->d3 = 0.0;
    }
  }

  explicit InvKin_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t1 = 0.0;
      this->t2 = 0.0;
      this->d3 = 0.0;
    }
  }

  // field types and members
  using _t1_type =
    double;
  _t1_type t1;
  using _t2_type =
    double;
  _t2_type t2;
  using _d3_type =
    double;
  _d3_type d3;

  // setters for named parameter idiom
  Type & set__t1(
    const double & _arg)
  {
    this->t1 = _arg;
    return *this;
  }
  Type & set__t2(
    const double & _arg)
  {
    this->t2 = _arg;
    return *this;
  }
  Type & set__d3(
    const double & _arg)
  {
    this->d3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_interfaces::srv::InvKin_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_interfaces::srv::InvKin_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_interfaces::srv::InvKin_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_interfaces::srv::InvKin_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_interfaces::srv::InvKin_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_interfaces::srv::InvKin_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_interfaces::srv::InvKin_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_interfaces::srv::InvKin_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_interfaces::srv::InvKin_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_interfaces::srv::InvKin_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_interfaces__srv__InvKin_Response
    std::shared_ptr<scara_interfaces::srv::InvKin_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_interfaces__srv__InvKin_Response
    std::shared_ptr<scara_interfaces::srv::InvKin_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InvKin_Response_ & other) const
  {
    if (this->t1 != other.t1) {
      return false;
    }
    if (this->t2 != other.t2) {
      return false;
    }
    if (this->d3 != other.d3) {
      return false;
    }
    return true;
  }
  bool operator!=(const InvKin_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InvKin_Response_

// alias to use template instance with default allocator
using InvKin_Response =
  scara_interfaces::srv::InvKin_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scara_interfaces

namespace scara_interfaces
{

namespace srv
{

struct InvKin
{
  using Request = scara_interfaces::srv::InvKin_Request;
  using Response = scara_interfaces::srv::InvKin_Response;
};

}  // namespace srv

}  // namespace scara_interfaces

#endif  // SCARA_INTERFACES__SRV__DETAIL__INV_KIN__STRUCT_HPP_
