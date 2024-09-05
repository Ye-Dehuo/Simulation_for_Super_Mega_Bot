// Generated by gencpp from file hector_gazebo_plugins/SetReferenceGeoPoseResponse.msg
// DO NOT EDIT!


#ifndef HECTOR_GAZEBO_PLUGINS_MESSAGE_SETREFERENCEGEOPOSERESPONSE_H
#define HECTOR_GAZEBO_PLUGINS_MESSAGE_SETREFERENCEGEOPOSERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hector_gazebo_plugins
{
template <class ContainerAllocator>
struct SetReferenceGeoPoseResponse_
{
  typedef SetReferenceGeoPoseResponse_<ContainerAllocator> Type;

  SetReferenceGeoPoseResponse_()
    {
    }
  SetReferenceGeoPoseResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetReferenceGeoPoseResponse_

typedef ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<std::allocator<void> > SetReferenceGeoPoseResponse;

typedef boost::shared_ptr< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse > SetReferenceGeoPoseResponsePtr;
typedef boost::shared_ptr< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse const> SetReferenceGeoPoseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace hector_gazebo_plugins

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hector_gazebo_plugins/SetReferenceGeoPoseResponse";
  }

  static const char* value(const ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetReferenceGeoPoseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::hector_gazebo_plugins::SetReferenceGeoPoseResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // HECTOR_GAZEBO_PLUGINS_MESSAGE_SETREFERENCEGEOPOSERESPONSE_H
