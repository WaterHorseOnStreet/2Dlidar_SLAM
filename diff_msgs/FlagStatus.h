// Generated by gencpp from file diff_msgs/FlagStatus.msg
// DO NOT EDIT!


#ifndef DIFF_MSGS_MESSAGE_FLAGSTATUS_H
#define DIFF_MSGS_MESSAGE_FLAGSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace diff_msgs
{
template <class ContainerAllocator>
struct FlagStatus_
{
  typedef FlagStatus_<ContainerAllocator> Type;

  FlagStatus_()
    : header()
    , heartBeat(0)
    , isLeftMotorOut(false)
    , isRightMotorOut(false)
    , isWheelSpeedControl(false)
    , isChassisOpenControl(false)
    , isChassisCloseControl(false)
    , batteryVoltage(0.0)  {
    }
  FlagStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , heartBeat(0)
    , isLeftMotorOut(false)
    , isRightMotorOut(false)
    , isWheelSpeedControl(false)
    , isChassisOpenControl(false)
    , isChassisCloseControl(false)
    , batteryVoltage(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _heartBeat_type;
  _heartBeat_type heartBeat;

   typedef uint8_t _isLeftMotorOut_type;
  _isLeftMotorOut_type isLeftMotorOut;

   typedef uint8_t _isRightMotorOut_type;
  _isRightMotorOut_type isRightMotorOut;

   typedef uint8_t _isWheelSpeedControl_type;
  _isWheelSpeedControl_type isWheelSpeedControl;

   typedef uint8_t _isChassisOpenControl_type;
  _isChassisOpenControl_type isChassisOpenControl;

   typedef uint8_t _isChassisCloseControl_type;
  _isChassisCloseControl_type isChassisCloseControl;

   typedef float _batteryVoltage_type;
  _batteryVoltage_type batteryVoltage;





  typedef boost::shared_ptr< ::diff_msgs::FlagStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::diff_msgs::FlagStatus_<ContainerAllocator> const> ConstPtr;

}; // struct FlagStatus_

typedef ::diff_msgs::FlagStatus_<std::allocator<void> > FlagStatus;

typedef boost::shared_ptr< ::diff_msgs::FlagStatus > FlagStatusPtr;
typedef boost::shared_ptr< ::diff_msgs::FlagStatus const> FlagStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::diff_msgs::FlagStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::diff_msgs::FlagStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace diff_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'diff_msgs': ['/home/lie/catkin_ws/src/diff_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::diff_msgs::FlagStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::diff_msgs::FlagStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::diff_msgs::FlagStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::diff_msgs::FlagStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::diff_msgs::FlagStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::diff_msgs::FlagStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::diff_msgs::FlagStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "433030900c5ca7947554eb0c012a9837";
  }

  static const char* value(const ::diff_msgs::FlagStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x433030900c5ca794ULL;
  static const uint64_t static_value2 = 0x7554eb0c012a9837ULL;
};

template<class ContainerAllocator>
struct DataType< ::diff_msgs::FlagStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "diff_msgs/FlagStatus";
  }

  static const char* value(const ::diff_msgs::FlagStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::diff_msgs::FlagStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 状态信息报文\n\
# 报文标识符 0x406 对应串口标识 0x13\n\
\n\
Header header\n\
uint8 heartBeat             # 心跳包 0-255\n\
bool isLeftMotorOut         # 左轮电机是否离线\n\
bool isRightMotorOut        # 右轮电机是否离线\n\
bool isWheelSpeedControl    # 是否处于轮速控制模式\n\
bool isChassisOpenControl   # 是否处于底盘开环控制模式\n\
bool isChassisCloseControl  # 是否处于底盘闭环控制模式\n\
float32 batteryVoltage      # 电池电压采样值\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::diff_msgs::FlagStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::diff_msgs::FlagStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.heartBeat);
      stream.next(m.isLeftMotorOut);
      stream.next(m.isRightMotorOut);
      stream.next(m.isWheelSpeedControl);
      stream.next(m.isChassisOpenControl);
      stream.next(m.isChassisCloseControl);
      stream.next(m.batteryVoltage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlagStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::diff_msgs::FlagStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::diff_msgs::FlagStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "heartBeat: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.heartBeat);
    s << indent << "isLeftMotorOut: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isLeftMotorOut);
    s << indent << "isRightMotorOut: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isRightMotorOut);
    s << indent << "isWheelSpeedControl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isWheelSpeedControl);
    s << indent << "isChassisOpenControl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isChassisOpenControl);
    s << indent << "isChassisCloseControl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isChassisCloseControl);
    s << indent << "batteryVoltage: ";
    Printer<float>::stream(s, indent + "  ", v.batteryVoltage);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DIFF_MSGS_MESSAGE_FLAGSTATUS_H