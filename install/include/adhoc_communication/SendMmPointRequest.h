// Generated by gencpp from file adhoc_communication/SendMmPointRequest.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_SENDMMPOINTREQUEST_H
#define ADHOC_COMMUNICATION_MESSAGE_SENDMMPOINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <adhoc_communication/MmPoint.h>

namespace adhoc_communication
{
template <class ContainerAllocator>
struct SendMmPointRequest_
{
  typedef SendMmPointRequest_<ContainerAllocator> Type;

  SendMmPointRequest_()
    : dst_robot()
    , topic()
    , point()  {
    }
  SendMmPointRequest_(const ContainerAllocator& _alloc)
    : dst_robot(_alloc)
    , topic(_alloc)
    , point(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _dst_robot_type;
  _dst_robot_type dst_robot;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;

   typedef  ::adhoc_communication::MmPoint_<ContainerAllocator>  _point_type;
  _point_type point;




  typedef boost::shared_ptr< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendMmPointRequest_

typedef ::adhoc_communication::SendMmPointRequest_<std::allocator<void> > SendMmPointRequest;

typedef boost::shared_ptr< ::adhoc_communication::SendMmPointRequest > SendMmPointRequestPtr;
typedef boost::shared_ptr< ::adhoc_communication::SendMmPointRequest const> SendMmPointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace adhoc_communication

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'adhoc_communication': ['/home/valerio/slampbenchmarking/src/aau_multi_robot/adhoc_communication/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "804c836a23c6b90c2c1269b2dff70c05";
  }

  static const char* value(const ::adhoc_communication::SendMmPointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x804c836a23c6b90cULL;
  static const uint64_t static_value2 = 0x2c1269b2dff70c05ULL;
};

template<class ContainerAllocator>
struct DataType< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adhoc_communication/SendMmPointRequest";
  }

  static const char* value(const ::adhoc_communication::SendMmPointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string dst_robot\n\
string topic\n\
adhoc_communication/MmPoint point\n\
\n\
================================================================================\n\
MSG: adhoc_communication/MmPoint\n\
string src_robot\n\
float64 x\n\
float64 y\n\
";
  }

  static const char* value(const ::adhoc_communication::SendMmPointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dst_robot);
      stream.next(m.topic);
      stream.next(m.point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendMmPointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adhoc_communication::SendMmPointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::adhoc_communication::SendMmPointRequest_<ContainerAllocator>& v)
  {
    s << indent << "dst_robot: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.dst_robot);
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
    s << indent << "point: ";
    s << std::endl;
    Printer< ::adhoc_communication::MmPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_SENDMMPOINTREQUEST_H
