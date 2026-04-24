// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from visual_navigation_interfaces:action/Navigate.idl
// generated code does not contain a copyright notice
#include "visual_navigation_interfaces/action/detail/navigate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
visual_navigation_interfaces__action__Navigate_Goal__init(visual_navigation_interfaces__action__Navigate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    visual_navigation_interfaces__action__Navigate_Goal__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_Goal__fini(visual_navigation_interfaces__action__Navigate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
visual_navigation_interfaces__action__Navigate_Goal__are_equal(const visual_navigation_interfaces__action__Navigate_Goal * lhs, const visual_navigation_interfaces__action__Navigate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_Goal__copy(
  const visual_navigation_interfaces__action__Navigate_Goal * input,
  visual_navigation_interfaces__action__Navigate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_Goal *
visual_navigation_interfaces__action__Navigate_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Goal * msg = (visual_navigation_interfaces__action__Navigate_Goal *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_Goal));
  bool success = visual_navigation_interfaces__action__Navigate_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_Goal__destroy(visual_navigation_interfaces__action__Navigate_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_Goal__Sequence__init(visual_navigation_interfaces__action__Navigate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Goal * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_Goal *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_Goal__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_Goal__Sequence__fini(visual_navigation_interfaces__action__Navigate_Goal__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_Goal__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_Goal__Sequence *
visual_navigation_interfaces__action__Navigate_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Goal__Sequence * array = (visual_navigation_interfaces__action__Navigate_Goal__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_Goal__Sequence__destroy(visual_navigation_interfaces__action__Navigate_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_Goal__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_Goal__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_Goal__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_Goal__Sequence * input,
  visual_navigation_interfaces__action__Navigate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_Goal * data =
      (visual_navigation_interfaces__action__Navigate_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
visual_navigation_interfaces__action__Navigate_Result__init(visual_navigation_interfaces__action__Navigate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
visual_navigation_interfaces__action__Navigate_Result__fini(visual_navigation_interfaces__action__Navigate_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
visual_navigation_interfaces__action__Navigate_Result__are_equal(const visual_navigation_interfaces__action__Navigate_Result * lhs, const visual_navigation_interfaces__action__Navigate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_Result__copy(
  const visual_navigation_interfaces__action__Navigate_Result * input,
  visual_navigation_interfaces__action__Navigate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

visual_navigation_interfaces__action__Navigate_Result *
visual_navigation_interfaces__action__Navigate_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Result * msg = (visual_navigation_interfaces__action__Navigate_Result *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_Result));
  bool success = visual_navigation_interfaces__action__Navigate_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_Result__destroy(visual_navigation_interfaces__action__Navigate_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_Result__Sequence__init(visual_navigation_interfaces__action__Navigate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Result * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_Result *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_Result__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_Result__Sequence__fini(visual_navigation_interfaces__action__Navigate_Result__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_Result__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_Result__Sequence *
visual_navigation_interfaces__action__Navigate_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Result__Sequence * array = (visual_navigation_interfaces__action__Navigate_Result__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_Result__Sequence__destroy(visual_navigation_interfaces__action__Navigate_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_Result__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_Result__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_Result__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_Result__Sequence * input,
  visual_navigation_interfaces__action__Navigate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_Result * data =
      (visual_navigation_interfaces__action__Navigate_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
visual_navigation_interfaces__action__Navigate_Feedback__init(visual_navigation_interfaces__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    visual_navigation_interfaces__action__Navigate_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_Feedback__fini(visual_navigation_interfaces__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
visual_navigation_interfaces__action__Navigate_Feedback__are_equal(const visual_navigation_interfaces__action__Navigate_Feedback * lhs, const visual_navigation_interfaces__action__Navigate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_Feedback__copy(
  const visual_navigation_interfaces__action__Navigate_Feedback * input,
  visual_navigation_interfaces__action__Navigate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_Feedback *
visual_navigation_interfaces__action__Navigate_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Feedback * msg = (visual_navigation_interfaces__action__Navigate_Feedback *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_Feedback));
  bool success = visual_navigation_interfaces__action__Navigate_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_Feedback__destroy(visual_navigation_interfaces__action__Navigate_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__init(visual_navigation_interfaces__action__Navigate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Feedback * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_Feedback *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_Feedback__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__fini(visual_navigation_interfaces__action__Navigate_Feedback__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_Feedback__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_Feedback__Sequence *
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_Feedback__Sequence * array = (visual_navigation_interfaces__action__Navigate_Feedback__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__destroy(visual_navigation_interfaces__action__Navigate_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_Feedback__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_Feedback__Sequence * input,
  visual_navigation_interfaces__action__Navigate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_Feedback * data =
      (visual_navigation_interfaces__action__Navigate_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "visual_navigation_interfaces/action/detail/navigate__functions.h"

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__init(visual_navigation_interfaces__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!visual_navigation_interfaces__action__Navigate_Goal__init(&msg->goal)) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  visual_navigation_interfaces__action__Navigate_Goal__fini(&msg->goal);
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Request * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!visual_navigation_interfaces__action__Navigate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Request * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!visual_navigation_interfaces__action__Navigate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_SendGoal_Request *
visual_navigation_interfaces__action__Navigate_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Request * msg = (visual_navigation_interfaces__action__Navigate_SendGoal_Request *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Request));
  bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Request__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__init(visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Request * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_SendGoal_Request *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * array = (visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_SendGoal_Request * data =
      (visual_navigation_interfaces__action__Navigate_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__init(visual_navigation_interfaces__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Response * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Response * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_SendGoal_Response *
visual_navigation_interfaces__action__Navigate_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Response * msg = (visual_navigation_interfaces__action__Navigate_SendGoal_Response *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Response));
  bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Response__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__init(visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Response * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_SendGoal_Response *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * array = (visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_SendGoal_Response * data =
      (visual_navigation_interfaces__action__Navigate_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "visual_navigation_interfaces/action/detail/navigate__functions.h"

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__init(visual_navigation_interfaces__action__Navigate_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Event * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Event * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_SendGoal_Event *
visual_navigation_interfaces__action__Navigate_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Event * msg = (visual_navigation_interfaces__action__Navigate_SendGoal_Event *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Event));
  bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Event__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__init(visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Event * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_SendGoal_Event *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * array = (visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_SendGoal_Event * data =
      (visual_navigation_interfaces__action__Navigate_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__init(visual_navigation_interfaces__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    visual_navigation_interfaces__action__Navigate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Request__fini(visual_navigation_interfaces__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Request * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Request * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_GetResult_Request *
visual_navigation_interfaces__action__Navigate_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Request * msg = (visual_navigation_interfaces__action__Navigate_GetResult_Request *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Request));
  bool success = visual_navigation_interfaces__action__Navigate_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Request__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__init(visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Request * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_GetResult_Request *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_GetResult_Request__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__fini(visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_GetResult_Request__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * array = (visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_GetResult_Request * data =
      (visual_navigation_interfaces__action__Navigate_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "visual_navigation_interfaces/action/detail/navigate__functions.h"

bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__init(visual_navigation_interfaces__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!visual_navigation_interfaces__action__Navigate_Result__init(&msg->result)) {
    visual_navigation_interfaces__action__Navigate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Response__fini(visual_navigation_interfaces__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  visual_navigation_interfaces__action__Navigate_Result__fini(&msg->result);
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Response * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!visual_navigation_interfaces__action__Navigate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Response * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!visual_navigation_interfaces__action__Navigate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_GetResult_Response *
visual_navigation_interfaces__action__Navigate_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Response * msg = (visual_navigation_interfaces__action__Navigate_GetResult_Response *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Response));
  bool success = visual_navigation_interfaces__action__Navigate_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Response__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__init(visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Response * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_GetResult_Response *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_GetResult_Response__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__fini(visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_GetResult_Response__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * array = (visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_GetResult_Response * data =
      (visual_navigation_interfaces__action__Navigate_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "visual_navigation_interfaces/action/detail/navigate__functions.h"

bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__init(visual_navigation_interfaces__action__Navigate_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__init(&msg->request, 0)) {
    visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__init(&msg->response, 0)) {
    visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(visual_navigation_interfaces__action__Navigate_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__fini(&msg->request);
  // response
  visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__fini(&msg->response);
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Event * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Event * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_GetResult_Event *
visual_navigation_interfaces__action__Navigate_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Event * msg = (visual_navigation_interfaces__action__Navigate_GetResult_Event *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Event));
  bool success = visual_navigation_interfaces__action__Navigate_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Event__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__init(visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Event * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_GetResult_Event *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__fini(visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * array = (visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_GetResult_Event * data =
      (visual_navigation_interfaces__action__Navigate_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "visual_navigation_interfaces/action/detail/navigate__functions.h"

bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__init(visual_navigation_interfaces__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!visual_navigation_interfaces__action__Navigate_Feedback__init(&msg->feedback)) {
    visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini(visual_navigation_interfaces__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  visual_navigation_interfaces__action__Navigate_Feedback__fini(&msg->feedback);
}

bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__are_equal(const visual_navigation_interfaces__action__Navigate_FeedbackMessage * lhs, const visual_navigation_interfaces__action__Navigate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!visual_navigation_interfaces__action__Navigate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__copy(
  const visual_navigation_interfaces__action__Navigate_FeedbackMessage * input,
  visual_navigation_interfaces__action__Navigate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!visual_navigation_interfaces__action__Navigate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

visual_navigation_interfaces__action__Navigate_FeedbackMessage *
visual_navigation_interfaces__action__Navigate_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_FeedbackMessage * msg = (visual_navigation_interfaces__action__Navigate_FeedbackMessage *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visual_navigation_interfaces__action__Navigate_FeedbackMessage));
  bool success = visual_navigation_interfaces__action__Navigate_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
visual_navigation_interfaces__action__Navigate_FeedbackMessage__destroy(visual_navigation_interfaces__action__Navigate_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__init(visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_FeedbackMessage * data = NULL;

  if (size) {
    data = (visual_navigation_interfaces__action__Navigate_FeedbackMessage *)allocator.zero_allocate(size, sizeof(visual_navigation_interfaces__action__Navigate_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visual_navigation_interfaces__action__Navigate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini(&data[i - 1]);
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
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__fini(visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * array)
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
      visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini(&array->data[i]);
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

visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence *
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * array = (visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence *)allocator.allocate(sizeof(visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__destroy(visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * input,
  visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(visual_navigation_interfaces__action__Navigate_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    visual_navigation_interfaces__action__Navigate_FeedbackMessage * data =
      (visual_navigation_interfaces__action__Navigate_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!visual_navigation_interfaces__action__Navigate_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!visual_navigation_interfaces__action__Navigate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
