// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aerobalance_interfaces:action/TrajectoryFileVelocity.idl
// generated code does not contain a copyright notice

#ifndef AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__STRUCT_HPP_
#define AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Goal __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Goal __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFileVelocity_Goal_
{
  using Type = TrajectoryFileVelocity_Goal_<ContainerAllocator>;

  explicit TrajectoryFileVelocity_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filepath = "";
    }
  }

  explicit TrajectoryFileVelocity_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filepath(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filepath = "";
    }
  }

  // field types and members
  using _filepath_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filepath_type filepath;

  // setters for named parameter idiom
  Type & set__filepath(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filepath = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Goal
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Goal
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFileVelocity_Goal_ & other) const
  {
    if (this->filepath != other.filepath) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFileVelocity_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFileVelocity_Goal_

// alias to use template instance with default allocator
using TrajectoryFileVelocity_Goal =
  aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces


#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Result __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Result __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFileVelocity_Result_
{
  using Type = TrajectoryFileVelocity_Result_<ContainerAllocator>;

  explicit TrajectoryFileVelocity_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
    }
  }

  explicit TrajectoryFileVelocity_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
    }
  }

  // field types and members
  using _error_code_type =
    int8_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__error_code(
    const int8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SUCCESSFUL =
    0;
  static constexpr int8_t INVALID_FILE =
    1;
  static constexpr int8_t INVALID_GOAL =
    -1;
  static constexpr int8_t INVALID_JOINTS =
    -2;

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Result
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Result
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFileVelocity_Result_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFileVelocity_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFileVelocity_Result_

// alias to use template instance with default allocator
using TrajectoryFileVelocity_Result =
  aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t TrajectoryFileVelocity_Result_<ContainerAllocator>::SUCCESSFUL;
template<typename ContainerAllocator>
constexpr int8_t TrajectoryFileVelocity_Result_<ContainerAllocator>::INVALID_FILE;
template<typename ContainerAllocator>
constexpr int8_t TrajectoryFileVelocity_Result_<ContainerAllocator>::INVALID_GOAL;
template<typename ContainerAllocator>
constexpr int8_t TrajectoryFileVelocity_Result_<ContainerAllocator>::INVALID_JOINTS;

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFileVelocity_Feedback_
{
  using Type = TrajectoryFileVelocity_Feedback_<ContainerAllocator>;

  explicit TrajectoryFileVelocity_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrajectoryFileVelocity_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_names_type joint_names;
  using _actual_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _actual_type actual;
  using _desired_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _desired_type desired;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__actual(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->actual = _arg;
    return *this;
  }
  Type & set__desired(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->desired = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_Feedback
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFileVelocity_Feedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->actual != other.actual) {
      return false;
    }
    if (this->desired != other.desired) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFileVelocity_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFileVelocity_Feedback_

// alias to use template instance with default allocator
using TrajectoryFileVelocity_Feedback =
  aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFileVelocity_SendGoal_Request_
{
  using Type = TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator>;

  explicit TrajectoryFileVelocity_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TrajectoryFileVelocity_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const aerobalance_interfaces::action::TrajectoryFileVelocity_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Request
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFileVelocity_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFileVelocity_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFileVelocity_SendGoal_Request_

// alias to use template instance with default allocator
using TrajectoryFileVelocity_SendGoal_Request =
  aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFileVelocity_SendGoal_Response_
{
  using Type = TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator>;

  explicit TrajectoryFileVelocity_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TrajectoryFileVelocity_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_SendGoal_Response
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFileVelocity_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFileVelocity_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFileVelocity_SendGoal_Response_

// alias to use template instance with default allocator
using TrajectoryFileVelocity_SendGoal_Response =
  aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces

namespace aerobalance_interfaces
{

namespace action
{

struct TrajectoryFileVelocity_SendGoal
{
  using Request = aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Request;
  using Response = aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal_Response;
};

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFileVelocity_GetResult_Request_
{
  using Type = TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator>;

  explicit TrajectoryFileVelocity_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TrajectoryFileVelocity_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Request
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFileVelocity_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFileVelocity_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFileVelocity_GetResult_Request_

// alias to use template instance with default allocator
using TrajectoryFileVelocity_GetResult_Request =
  aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFileVelocity_GetResult_Response_
{
  using Type = TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator>;

  explicit TrajectoryFileVelocity_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TrajectoryFileVelocity_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const aerobalance_interfaces::action::TrajectoryFileVelocity_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_GetResult_Response
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFileVelocity_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFileVelocity_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFileVelocity_GetResult_Response_

// alias to use template instance with default allocator
using TrajectoryFileVelocity_GetResult_Response =
  aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces

namespace aerobalance_interfaces
{

namespace action
{

struct TrajectoryFileVelocity_GetResult
{
  using Request = aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Request;
  using Response = aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult_Response;
};

}  // namespace action

}  // namespace aerobalance_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "aerobalance_interfaces/action/detail/trajectory_file_velocity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage __declspec(deprecated)
#endif

namespace aerobalance_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryFileVelocity_FeedbackMessage_
{
  using Type = TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator>;

  explicit TrajectoryFileVelocity_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TrajectoryFileVelocity_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobalance_interfaces__action__TrajectoryFileVelocity_FeedbackMessage
    std::shared_ptr<aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryFileVelocity_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryFileVelocity_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryFileVelocity_FeedbackMessage_

// alias to use template instance with default allocator
using TrajectoryFileVelocity_FeedbackMessage =
  aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace aerobalance_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace aerobalance_interfaces
{

namespace action
{

struct TrajectoryFileVelocity
{
  /// The goal message defined in the action definition.
  using Goal = aerobalance_interfaces::action::TrajectoryFileVelocity_Goal;
  /// The result message defined in the action definition.
  using Result = aerobalance_interfaces::action::TrajectoryFileVelocity_Result;
  /// The feedback message defined in the action definition.
  using Feedback = aerobalance_interfaces::action::TrajectoryFileVelocity_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = aerobalance_interfaces::action::TrajectoryFileVelocity_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = aerobalance_interfaces::action::TrajectoryFileVelocity_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = aerobalance_interfaces::action::TrajectoryFileVelocity_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TrajectoryFileVelocity TrajectoryFileVelocity;

}  // namespace action

}  // namespace aerobalance_interfaces

#endif  // AEROBALANCE_INTERFACES__ACTION__DETAIL__TRAJECTORY_FILE_VELOCITY__STRUCT_HPP_
