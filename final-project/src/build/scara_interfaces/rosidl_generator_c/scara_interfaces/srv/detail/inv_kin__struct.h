// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scara_interfaces:srv/InvKin.idl
// generated code does not contain a copyright notice

#ifndef SCARA_INTERFACES__SRV__DETAIL__INV_KIN__STRUCT_H_
#define SCARA_INTERFACES__SRV__DETAIL__INV_KIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InvKin in the package scara_interfaces.
typedef struct scara_interfaces__srv__InvKin_Request
{
  double x;
  double y;
  double z;
} scara_interfaces__srv__InvKin_Request;

// Struct for a sequence of scara_interfaces__srv__InvKin_Request.
typedef struct scara_interfaces__srv__InvKin_Request__Sequence
{
  scara_interfaces__srv__InvKin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__srv__InvKin_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InvKin in the package scara_interfaces.
typedef struct scara_interfaces__srv__InvKin_Response
{
  double t1;
  double t2;
  double d3;
} scara_interfaces__srv__InvKin_Response;

// Struct for a sequence of scara_interfaces__srv__InvKin_Response.
typedef struct scara_interfaces__srv__InvKin_Response__Sequence
{
  scara_interfaces__srv__InvKin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_interfaces__srv__InvKin_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCARA_INTERFACES__SRV__DETAIL__INV_KIN__STRUCT_H_
