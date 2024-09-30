// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:srv/Partol.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__PARTOL__TRAITS_HPP_
#define INTERFACE__SRV__DETAIL__PARTOL__TRAITS_HPP_

#include "interface/srv/detail/partol__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface::srv::Partol_Request>()
{
  return "interface::srv::Partol_Request";
}

template<>
inline const char * name<interface::srv::Partol_Request>()
{
  return "interface/srv/Partol_Request";
}

template<>
struct has_fixed_size<interface::srv::Partol_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface::srv::Partol_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface::srv::Partol_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface::srv::Partol_Response>()
{
  return "interface::srv::Partol_Response";
}

template<>
inline const char * name<interface::srv::Partol_Response>()
{
  return "interface/srv/Partol_Response";
}

template<>
struct has_fixed_size<interface::srv::Partol_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface::srv::Partol_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface::srv::Partol_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface::srv::Partol>()
{
  return "interface::srv::Partol";
}

template<>
inline const char * name<interface::srv::Partol>()
{
  return "interface/srv/Partol";
}

template<>
struct has_fixed_size<interface::srv::Partol>
  : std::integral_constant<
    bool,
    has_fixed_size<interface::srv::Partol_Request>::value &&
    has_fixed_size<interface::srv::Partol_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface::srv::Partol>
  : std::integral_constant<
    bool,
    has_bounded_size<interface::srv::Partol_Request>::value &&
    has_bounded_size<interface::srv::Partol_Response>::value
  >
{
};

template<>
struct is_service<interface::srv::Partol>
  : std::true_type
{
};

template<>
struct is_service_request<interface::srv::Partol_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface::srv::Partol_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__SRV__DETAIL__PARTOL__TRAITS_HPP_
