// Generated by gencpp from file fake_network/RobotPositionRequest.msg
// DO NOT EDIT!


#ifndef FAKE_NETWORK_MESSAGE_ROBOTPOSITIONREQUEST_H
#define FAKE_NETWORK_MESSAGE_ROBOTPOSITIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fake_network
{
template <class ContainerAllocator>
struct RobotPositionRequest_
{
  typedef RobotPositionRequest_<ContainerAllocator> Type;

  RobotPositionRequest_()
    : s()  {
    }
  RobotPositionRequest_(const ContainerAllocator& _alloc)
    : s(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _s_type;
  _s_type s;




  typedef boost::shared_ptr< ::fake_network::RobotPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fake_network::RobotPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RobotPositionRequest_

typedef ::fake_network::RobotPositionRequest_<std::allocator<void> > RobotPositionRequest;

typedef boost::shared_ptr< ::fake_network::RobotPositionRequest > RobotPositionRequestPtr;
typedef boost::shared_ptr< ::fake_network::RobotPositionRequest const> RobotPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fake_network::RobotPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fake_network::RobotPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fake_network

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'fake_network': ['/home/valerio/slampbenchmarking/src/aau_multi_robot/fake_network/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fake_network::RobotPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fake_network::RobotPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fake_network::RobotPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fake_network::RobotPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fake_network::RobotPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fake_network::RobotPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fake_network::RobotPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "81af3411577d82a6786258523fc891ce";
  }

  static const char* value(const ::fake_network::RobotPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x81af3411577d82a6ULL;
  static const uint64_t static_value2 = 0x786258523fc891ceULL;
};

template<class ContainerAllocator>
struct DataType< ::fake_network::RobotPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fake_network/RobotPositionRequest";
  }

  static const char* value(const ::fake_network::RobotPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fake_network::RobotPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string s\n\
";
  }

  static const char* value(const ::fake_network::RobotPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fake_network::RobotPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.s);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fake_network::RobotPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fake_network::RobotPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "s: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.s);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FAKE_NETWORK_MESSAGE_ROBOTPOSITIONREQUEST_H
