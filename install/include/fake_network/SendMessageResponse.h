// Generated by gencpp from file fake_network/SendMessageResponse.msg
// DO NOT EDIT!


#ifndef FAKE_NETWORK_MESSAGE_SENDMESSAGERESPONSE_H
#define FAKE_NETWORK_MESSAGE_SENDMESSAGERESPONSE_H


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
struct SendMessageResponse_
{
  typedef SendMessageResponse_<ContainerAllocator> Type;

  SendMessageResponse_()
    {
    }
  SendMessageResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::fake_network::SendMessageResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fake_network::SendMessageResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SendMessageResponse_

typedef ::fake_network::SendMessageResponse_<std::allocator<void> > SendMessageResponse;

typedef boost::shared_ptr< ::fake_network::SendMessageResponse > SendMessageResponsePtr;
typedef boost::shared_ptr< ::fake_network::SendMessageResponse const> SendMessageResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fake_network::SendMessageResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fake_network::SendMessageResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fake_network

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'fake_network': ['/home/valerio/slampbenchmarking/src/aau_multi_robot/fake_network/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fake_network::SendMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fake_network::SendMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fake_network::SendMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fake_network::SendMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fake_network::SendMessageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fake_network::SendMessageResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fake_network::SendMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::fake_network::SendMessageResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::fake_network::SendMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fake_network/SendMessageResponse";
  }

  static const char* value(const ::fake_network::SendMessageResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fake_network::SendMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::fake_network::SendMessageResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fake_network::SendMessageResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendMessageResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fake_network::SendMessageResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::fake_network::SendMessageResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // FAKE_NETWORK_MESSAGE_SENDMESSAGERESPONSE_H
