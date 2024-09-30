// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interface:srv/Partol.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interface/srv/detail/partol__rosidl_typesupport_introspection_c.h"
#include "interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interface/srv/detail/partol__functions.h"
#include "interface/srv/detail/partol__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interface__srv__Partol_Request__init(message_memory);
}

void Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_fini_function(void * message_memory)
{
  interface__srv__Partol_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_message_member_array[2] = {
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__srv__Partol_Request, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__srv__Partol_Request, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_message_members = {
  "interface__srv",  // message namespace
  "Partol_Request",  // message name
  2,  // number of fields
  sizeof(interface__srv__Partol_Request),
  Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_message_member_array,  // message members
  Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_message_type_support_handle = {
  0,
  &Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Partol_Request)() {
  if (!Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_message_type_support_handle.typesupport_identifier) {
    Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Partol_Request__rosidl_typesupport_introspection_c__Partol_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interface/srv/detail/partol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interface/srv/detail/partol__functions.h"
// already included above
// #include "interface/srv/detail/partol__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interface__srv__Partol_Response__init(message_memory);
}

void Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_fini_function(void * message_memory)
{
  interface__srv__Partol_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__srv__Partol_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_message_members = {
  "interface__srv",  // message namespace
  "Partol_Response",  // message name
  1,  // number of fields
  sizeof(interface__srv__Partol_Response),
  Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_message_member_array,  // message members
  Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_message_type_support_handle = {
  0,
  &Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Partol_Response)() {
  if (!Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_message_type_support_handle.typesupport_identifier) {
    Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Partol_Response__rosidl_typesupport_introspection_c__Partol_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interface/srv/detail/partol__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_service_members = {
  "interface__srv",  // service namespace
  "Partol",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_Request_message_type_support_handle,
  NULL  // response message
  // interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_Response_message_type_support_handle
};

static rosidl_service_type_support_t interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_service_type_support_handle = {
  0,
  &interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Partol_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Partol_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Partol)() {
  if (!interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_service_type_support_handle.typesupport_identifier) {
    interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Partol_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, srv, Partol_Response)()->data;
  }

  return &interface__srv__detail__partol__rosidl_typesupport_introspection_c__Partol_service_type_support_handle;
}
