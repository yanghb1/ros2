// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:srv/Partol.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__PARTOL__STRUCT_HPP_
#define INTERFACE__SRV__DETAIL__PARTOL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interface__srv__Partol_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface__srv__Partol_Request __declspec(deprecated)
#endif

namespace interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Partol_Request_
{
  using Type = Partol_Request_<ContainerAllocator>;

  explicit Partol_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0f;
      this->target_y = 0.0f;
    }
  }

  explicit Partol_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0f;
      this->target_y = 0.0f;
    }
  }

  // field types and members
  using _target_x_type =
    float;
  _target_x_type target_x;
  using _target_y_type =
    float;
  _target_y_type target_y;

  // setters for named parameter idiom
  Type & set__target_x(
    const float & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const float & _arg)
  {
    this->target_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::srv::Partol_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::srv::Partol_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::srv::Partol_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::srv::Partol_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::srv::Partol_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Partol_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::srv::Partol_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Partol_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::srv::Partol_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::srv::Partol_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__srv__Partol_Request
    std::shared_ptr<interface::srv::Partol_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__srv__Partol_Request
    std::shared_ptr<interface::srv::Partol_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Partol_Request_ & other) const
  {
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Partol_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Partol_Request_

// alias to use template instance with default allocator
using Partol_Request =
  interface::srv::Partol_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface


#ifndef _WIN32
# define DEPRECATED__interface__srv__Partol_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface__srv__Partol_Response __declspec(deprecated)
#endif

namespace interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Partol_Response_
{
  using Type = Partol_Response_<ContainerAllocator>;

  explicit Partol_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit Partol_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    int8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SUCCESS =
    1;
  static constexpr int8_t FAIL =
    0;

  // pointer types
  using RawPtr =
    interface::srv::Partol_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::srv::Partol_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::srv::Partol_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::srv::Partol_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::srv::Partol_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Partol_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::srv::Partol_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Partol_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::srv::Partol_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::srv::Partol_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__srv__Partol_Response
    std::shared_ptr<interface::srv::Partol_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__srv__Partol_Response
    std::shared_ptr<interface::srv::Partol_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Partol_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Partol_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Partol_Response_

// alias to use template instance with default allocator
using Partol_Response =
  interface::srv::Partol_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t Partol_Response_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr int8_t Partol_Response_<ContainerAllocator>::FAIL;

}  // namespace srv

}  // namespace interface

namespace interface
{

namespace srv
{

struct Partol
{
  using Request = interface::srv::Partol_Request;
  using Response = interface::srv::Partol_Response;
};

}  // namespace srv

}  // namespace interface

#endif  // INTERFACE__SRV__DETAIL__PARTOL__STRUCT_HPP_
