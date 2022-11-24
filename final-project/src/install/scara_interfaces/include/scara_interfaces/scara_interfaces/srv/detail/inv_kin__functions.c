// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from scara_interfaces:srv/InvKin.idl
// generated code does not contain a copyright notice
#include "scara_interfaces/srv/detail/inv_kin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
scara_interfaces__srv__InvKin_Request__init(scara_interfaces__srv__InvKin_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
scara_interfaces__srv__InvKin_Request__fini(scara_interfaces__srv__InvKin_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
scara_interfaces__srv__InvKin_Request__are_equal(const scara_interfaces__srv__InvKin_Request * lhs, const scara_interfaces__srv__InvKin_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
scara_interfaces__srv__InvKin_Request__copy(
  const scara_interfaces__srv__InvKin_Request * input,
  scara_interfaces__srv__InvKin_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

scara_interfaces__srv__InvKin_Request *
scara_interfaces__srv__InvKin_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_interfaces__srv__InvKin_Request * msg = (scara_interfaces__srv__InvKin_Request *)allocator.allocate(sizeof(scara_interfaces__srv__InvKin_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__srv__InvKin_Request));
  bool success = scara_interfaces__srv__InvKin_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__srv__InvKin_Request__destroy(scara_interfaces__srv__InvKin_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scara_interfaces__srv__InvKin_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scara_interfaces__srv__InvKin_Request__Sequence__init(scara_interfaces__srv__InvKin_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_interfaces__srv__InvKin_Request * data = NULL;

  if (size) {
    data = (scara_interfaces__srv__InvKin_Request *)allocator.zero_allocate(size, sizeof(scara_interfaces__srv__InvKin_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__srv__InvKin_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__srv__InvKin_Request__fini(&data[i - 1]);
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
scara_interfaces__srv__InvKin_Request__Sequence__fini(scara_interfaces__srv__InvKin_Request__Sequence * array)
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
      scara_interfaces__srv__InvKin_Request__fini(&array->data[i]);
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

scara_interfaces__srv__InvKin_Request__Sequence *
scara_interfaces__srv__InvKin_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_interfaces__srv__InvKin_Request__Sequence * array = (scara_interfaces__srv__InvKin_Request__Sequence *)allocator.allocate(sizeof(scara_interfaces__srv__InvKin_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__srv__InvKin_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scara_interfaces__srv__InvKin_Request__Sequence__destroy(scara_interfaces__srv__InvKin_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scara_interfaces__srv__InvKin_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scara_interfaces__srv__InvKin_Request__Sequence__are_equal(const scara_interfaces__srv__InvKin_Request__Sequence * lhs, const scara_interfaces__srv__InvKin_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__srv__InvKin_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__srv__InvKin_Request__Sequence__copy(
  const scara_interfaces__srv__InvKin_Request__Sequence * input,
  scara_interfaces__srv__InvKin_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__srv__InvKin_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    scara_interfaces__srv__InvKin_Request * data =
      (scara_interfaces__srv__InvKin_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__srv__InvKin_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          scara_interfaces__srv__InvKin_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!scara_interfaces__srv__InvKin_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
scara_interfaces__srv__InvKin_Response__init(scara_interfaces__srv__InvKin_Response * msg)
{
  if (!msg) {
    return false;
  }
  // t1
  // t2
  // d3
  return true;
}

void
scara_interfaces__srv__InvKin_Response__fini(scara_interfaces__srv__InvKin_Response * msg)
{
  if (!msg) {
    return;
  }
  // t1
  // t2
  // d3
}

bool
scara_interfaces__srv__InvKin_Response__are_equal(const scara_interfaces__srv__InvKin_Response * lhs, const scara_interfaces__srv__InvKin_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t1
  if (lhs->t1 != rhs->t1) {
    return false;
  }
  // t2
  if (lhs->t2 != rhs->t2) {
    return false;
  }
  // d3
  if (lhs->d3 != rhs->d3) {
    return false;
  }
  return true;
}

bool
scara_interfaces__srv__InvKin_Response__copy(
  const scara_interfaces__srv__InvKin_Response * input,
  scara_interfaces__srv__InvKin_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // t1
  output->t1 = input->t1;
  // t2
  output->t2 = input->t2;
  // d3
  output->d3 = input->d3;
  return true;
}

scara_interfaces__srv__InvKin_Response *
scara_interfaces__srv__InvKin_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_interfaces__srv__InvKin_Response * msg = (scara_interfaces__srv__InvKin_Response *)allocator.allocate(sizeof(scara_interfaces__srv__InvKin_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(scara_interfaces__srv__InvKin_Response));
  bool success = scara_interfaces__srv__InvKin_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
scara_interfaces__srv__InvKin_Response__destroy(scara_interfaces__srv__InvKin_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    scara_interfaces__srv__InvKin_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
scara_interfaces__srv__InvKin_Response__Sequence__init(scara_interfaces__srv__InvKin_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_interfaces__srv__InvKin_Response * data = NULL;

  if (size) {
    data = (scara_interfaces__srv__InvKin_Response *)allocator.zero_allocate(size, sizeof(scara_interfaces__srv__InvKin_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = scara_interfaces__srv__InvKin_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        scara_interfaces__srv__InvKin_Response__fini(&data[i - 1]);
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
scara_interfaces__srv__InvKin_Response__Sequence__fini(scara_interfaces__srv__InvKin_Response__Sequence * array)
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
      scara_interfaces__srv__InvKin_Response__fini(&array->data[i]);
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

scara_interfaces__srv__InvKin_Response__Sequence *
scara_interfaces__srv__InvKin_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  scara_interfaces__srv__InvKin_Response__Sequence * array = (scara_interfaces__srv__InvKin_Response__Sequence *)allocator.allocate(sizeof(scara_interfaces__srv__InvKin_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = scara_interfaces__srv__InvKin_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
scara_interfaces__srv__InvKin_Response__Sequence__destroy(scara_interfaces__srv__InvKin_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    scara_interfaces__srv__InvKin_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
scara_interfaces__srv__InvKin_Response__Sequence__are_equal(const scara_interfaces__srv__InvKin_Response__Sequence * lhs, const scara_interfaces__srv__InvKin_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!scara_interfaces__srv__InvKin_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
scara_interfaces__srv__InvKin_Response__Sequence__copy(
  const scara_interfaces__srv__InvKin_Response__Sequence * input,
  scara_interfaces__srv__InvKin_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(scara_interfaces__srv__InvKin_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    scara_interfaces__srv__InvKin_Response * data =
      (scara_interfaces__srv__InvKin_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!scara_interfaces__srv__InvKin_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          scara_interfaces__srv__InvKin_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!scara_interfaces__srv__InvKin_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
