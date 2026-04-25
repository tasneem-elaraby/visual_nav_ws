// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from visual_navigation_interfaces:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "visual_navigation_interfaces/action/navigate.h"


#ifndef VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__FUNCTIONS_H_
#define VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "visual_navigation_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "visual_navigation_interfaces/action/detail/navigate__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate__get_type_hash(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate__get_type_description(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate__get_individual_type_description_source(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate__get_type_description_sources(
  const rosidl_action_type_support_t * type_support);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_Goal
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Goal__init(visual_navigation_interfaces__action__Navigate_Goal * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Goal__fini(visual_navigation_interfaces__action__Navigate_Goal * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_Goal *
visual_navigation_interfaces__action__Navigate_Goal__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Goal__destroy(visual_navigation_interfaces__action__Navigate_Goal * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Goal__are_equal(const visual_navigation_interfaces__action__Navigate_Goal * lhs, const visual_navigation_interfaces__action__Navigate_Goal * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Goal__copy(
  const visual_navigation_interfaces__action__Navigate_Goal * input,
  visual_navigation_interfaces__action__Navigate_Goal * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_Goal__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_Goal__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_Goal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_Goal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Goal__Sequence__init(visual_navigation_interfaces__action__Navigate_Goal__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Goal__Sequence__fini(visual_navigation_interfaces__action__Navigate_Goal__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_Goal__Sequence *
visual_navigation_interfaces__action__Navigate_Goal__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Goal__Sequence__destroy(visual_navigation_interfaces__action__Navigate_Goal__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Goal__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_Goal__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_Goal__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Goal__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_Goal__Sequence * input,
  visual_navigation_interfaces__action__Navigate_Goal__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_Result
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Result__init(visual_navigation_interfaces__action__Navigate_Result * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Result__fini(visual_navigation_interfaces__action__Navigate_Result * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_Result *
visual_navigation_interfaces__action__Navigate_Result__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Result__destroy(visual_navigation_interfaces__action__Navigate_Result * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Result__are_equal(const visual_navigation_interfaces__action__Navigate_Result * lhs, const visual_navigation_interfaces__action__Navigate_Result * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Result__copy(
  const visual_navigation_interfaces__action__Navigate_Result * input,
  visual_navigation_interfaces__action__Navigate_Result * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_Result__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_Result__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_Result__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_Result__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Result__Sequence__init(visual_navigation_interfaces__action__Navigate_Result__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Result__Sequence__fini(visual_navigation_interfaces__action__Navigate_Result__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_Result__Sequence *
visual_navigation_interfaces__action__Navigate_Result__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Result__Sequence__destroy(visual_navigation_interfaces__action__Navigate_Result__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Result__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_Result__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_Result__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Result__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_Result__Sequence * input,
  visual_navigation_interfaces__action__Navigate_Result__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_Feedback
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Feedback__init(visual_navigation_interfaces__action__Navigate_Feedback * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Feedback__fini(visual_navigation_interfaces__action__Navigate_Feedback * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_Feedback *
visual_navigation_interfaces__action__Navigate_Feedback__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Feedback__destroy(visual_navigation_interfaces__action__Navigate_Feedback * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Feedback__are_equal(const visual_navigation_interfaces__action__Navigate_Feedback * lhs, const visual_navigation_interfaces__action__Navigate_Feedback * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Feedback__copy(
  const visual_navigation_interfaces__action__Navigate_Feedback * input,
  visual_navigation_interfaces__action__Navigate_Feedback * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_Feedback__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_Feedback__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_Feedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_Feedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__init(visual_navigation_interfaces__action__Navigate_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__fini(visual_navigation_interfaces__action__Navigate_Feedback__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_Feedback__Sequence *
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__destroy(visual_navigation_interfaces__action__Navigate_Feedback__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_Feedback__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_Feedback__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_Feedback__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_Feedback__Sequence * input,
  visual_navigation_interfaces__action__Navigate_Feedback__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_SendGoal__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_SendGoal__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_SendGoal__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_SendGoal_Request
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__init(visual_navigation_interfaces__action__Navigate_SendGoal_Request * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Request * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_SendGoal_Request *
visual_navigation_interfaces__action__Navigate_SendGoal_Request__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Request__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Request * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Request * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Request * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Request * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_SendGoal_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_SendGoal_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_SendGoal_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__init(visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Request__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_SendGoal_Response
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__init(visual_navigation_interfaces__action__Navigate_SendGoal_Response * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Response * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_SendGoal_Response *
visual_navigation_interfaces__action__Navigate_SendGoal_Response__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Response__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Response * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Response * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Response * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Response * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_SendGoal_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_SendGoal_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_SendGoal_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__init(visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Response__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_SendGoal_Event
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_SendGoal_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__init(visual_navigation_interfaces__action__Navigate_SendGoal_Event * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Event * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_SendGoal_Event *
visual_navigation_interfaces__action__Navigate_SendGoal_Event__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Event__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Event * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Event * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Event * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Event * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_SendGoal_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_SendGoal_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_SendGoal_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__init(visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__fini(visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence *
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__destroy(visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * input,
  visual_navigation_interfaces__action__Navigate_SendGoal_Event__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_GetResult__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_GetResult__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_GetResult__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_GetResult_Request
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__init(visual_navigation_interfaces__action__Navigate_GetResult_Request * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Request__fini(visual_navigation_interfaces__action__Navigate_GetResult_Request * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_GetResult_Request *
visual_navigation_interfaces__action__Navigate_GetResult_Request__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Request__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Request * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Request * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Request * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Request * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_GetResult_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_GetResult_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_GetResult_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__init(visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__fini(visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Request__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_GetResult_Response
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__init(visual_navigation_interfaces__action__Navigate_GetResult_Response * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Response__fini(visual_navigation_interfaces__action__Navigate_GetResult_Response * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_GetResult_Response *
visual_navigation_interfaces__action__Navigate_GetResult_Response__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Response__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Response * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Response * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Response * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Response * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_GetResult_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_GetResult_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_GetResult_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__init(visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__fini(visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Response__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_GetResult_Event
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_GetResult_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__init(visual_navigation_interfaces__action__Navigate_GetResult_Event * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Event__fini(visual_navigation_interfaces__action__Navigate_GetResult_Event * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_GetResult_Event *
visual_navigation_interfaces__action__Navigate_GetResult_Event__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Event__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Event * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Event * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Event * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Event * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_GetResult_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_GetResult_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_GetResult_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__init(visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__fini(visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence *
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__destroy(visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * input,
  visual_navigation_interfaces__action__Navigate_GetResult_Event__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * visual_navigation_interfaces__action__Navigate_FeedbackMessage
 * )) before or use
 * visual_navigation_interfaces__action__Navigate_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__init(visual_navigation_interfaces__action__Navigate_FeedbackMessage * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini(visual_navigation_interfaces__action__Navigate_FeedbackMessage * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * visual_navigation_interfaces__action__Navigate_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_FeedbackMessage *
visual_navigation_interfaces__action__Navigate_FeedbackMessage__create(void);

/// Destroy action/Navigate message.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_FeedbackMessage__destroy(visual_navigation_interfaces__action__Navigate_FeedbackMessage * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__are_equal(const visual_navigation_interfaces__action__Navigate_FeedbackMessage * lhs, const visual_navigation_interfaces__action__Navigate_FeedbackMessage * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__copy(
  const visual_navigation_interfaces__action__Navigate_FeedbackMessage * input,
  visual_navigation_interfaces__action__Navigate_FeedbackMessage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_type_hash_t *
visual_navigation_interfaces__action__Navigate_FeedbackMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
visual_navigation_interfaces__action__Navigate_FeedbackMessage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
visual_navigation_interfaces__action__Navigate_FeedbackMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
visual_navigation_interfaces__action__Navigate_FeedbackMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * visual_navigation_interfaces__action__Navigate_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__init(visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__fini(visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence *
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
void
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__destroy(visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__are_equal(const visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * lhs, const visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_visual_navigation_interfaces
bool
visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence__copy(
  const visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * input,
  visual_navigation_interfaces__action__Navigate_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VISUAL_NAVIGATION_INTERFACES__ACTION__DETAIL__NAVIGATE__FUNCTIONS_H_
