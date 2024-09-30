// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:srv/Partol.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__PARTOL__STRUCT_H_
#define INTERFACE__SRV__DETAIL__PARTOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Partol in the package interface.
typedef struct interface__srv__Partol_Request
{
  float target_x;
  float target_y;
} interface__srv__Partol_Request;

// Struct for a sequence of interface__srv__Partol_Request.
typedef struct interface__srv__Partol_Request__Sequence
{
  interface__srv__Partol_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__srv__Partol_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  interface__srv__Partol_Response__SUCCESS = 1
};

/// Constant 'FAIL'.
enum
{
  interface__srv__Partol_Response__FAIL = 0
};

// Struct defined in srv/Partol in the package interface.
typedef struct interface__srv__Partol_Response
{
  int8_t result;
} interface__srv__Partol_Response;

// Struct for a sequence of interface__srv__Partol_Response.
typedef struct interface__srv__Partol_Response__Sequence
{
  interface__srv__Partol_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__srv__Partol_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__SRV__DETAIL__PARTOL__STRUCT_H_
