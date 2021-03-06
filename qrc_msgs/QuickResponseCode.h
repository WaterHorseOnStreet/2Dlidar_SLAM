// Generated by gencpp from file qrc_msgs/QuickResponseCode.msg
// DO NOT EDIT!


#ifndef QRC_MSGS_MESSAGE_QUICKRESPONSECODE_H
#define QRC_MSGS_MESSAGE_QUICKRESPONSECODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace qrc_msgs
{
template <class ContainerAllocator>
struct QuickResponseCode_
{
  typedef QuickResponseCode_<ContainerAllocator> Type;

  QuickResponseCode_()
    : QRC_id()
    , center_point()
    , angle(0.0)
    , cost_time(0)
    , time_stamp(0)
    , local_flag(0)
    , decode_flag(0)
    , ROI_local_flag(0)
    , relative_angle(0.0)
    , qrcp_point()
    , lccp_point()
    , num_data()  {
    }
  QuickResponseCode_(const ContainerAllocator& _alloc)
    : QRC_id(_alloc)
    , center_point(_alloc)
    , angle(0.0)
    , cost_time(0)
    , time_stamp(0)
    , local_flag(0)
    , decode_flag(0)
    , ROI_local_flag(0)
    , relative_angle(0.0)
    , qrcp_point(_alloc)
    , lccp_point(_alloc)
    , num_data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _QRC_id_type;
  _QRC_id_type QRC_id;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _center_point_type;
  _center_point_type center_point;

   typedef float _angle_type;
  _angle_type angle;

   typedef uint8_t _cost_time_type;
  _cost_time_type cost_time;

   typedef uint32_t _time_stamp_type;
  _time_stamp_type time_stamp;

   typedef uint8_t _local_flag_type;
  _local_flag_type local_flag;

   typedef uint8_t _decode_flag_type;
  _decode_flag_type decode_flag;

   typedef uint8_t _ROI_local_flag_type;
  _ROI_local_flag_type ROI_local_flag;

   typedef float _relative_angle_type;
  _relative_angle_type relative_angle;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _qrcp_point_type;
  _qrcp_point_type qrcp_point;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _lccp_point_type;
  _lccp_point_type lccp_point;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _num_data_type;
  _num_data_type num_data;





  typedef boost::shared_ptr< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> const> ConstPtr;

}; // struct QuickResponseCode_

typedef ::qrc_msgs::QuickResponseCode_<std::allocator<void> > QuickResponseCode;

typedef boost::shared_ptr< ::qrc_msgs::QuickResponseCode > QuickResponseCodePtr;
typedef boost::shared_ptr< ::qrc_msgs::QuickResponseCode const> QuickResponseCodeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qrc_msgs::QuickResponseCode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::qrc_msgs::QuickResponseCode_<ContainerAllocator1> & lhs, const ::qrc_msgs::QuickResponseCode_<ContainerAllocator2> & rhs)
{
  return lhs.QRC_id == rhs.QRC_id &&
    lhs.center_point == rhs.center_point &&
    lhs.angle == rhs.angle &&
    lhs.cost_time == rhs.cost_time &&
    lhs.time_stamp == rhs.time_stamp &&
    lhs.local_flag == rhs.local_flag &&
    lhs.decode_flag == rhs.decode_flag &&
    lhs.ROI_local_flag == rhs.ROI_local_flag &&
    lhs.relative_angle == rhs.relative_angle &&
    lhs.qrcp_point == rhs.qrcp_point &&
    lhs.lccp_point == rhs.lccp_point &&
    lhs.num_data == rhs.num_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::qrc_msgs::QuickResponseCode_<ContainerAllocator1> & lhs, const ::qrc_msgs::QuickResponseCode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace qrc_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18f15b42692291484d4054ec477a101e";
  }

  static const char* value(const ::qrc_msgs::QuickResponseCode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18f15b4269229148ULL;
  static const uint64_t static_value2 = 0x4d4054ec477a101eULL;
};

template<class ContainerAllocator>
struct DataType< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qrc_msgs/QuickResponseCode";
  }

  static const char* value(const ::qrc_msgs::QuickResponseCode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string QRC_id\n"
"geometry_msgs/Point center_point\n"
"float32 angle\n"
"uint8 cost_time\n"
"uint32 time_stamp\n"
"uint8 local_flag\n"
"uint8 decode_flag\n"
"uint8 ROI_local_flag\n"
"float32 relative_angle\n"
"geometry_msgs/Point qrcp_point\n"
"geometry_msgs/Point lccp_point\n"
"string[] num_data\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::qrc_msgs::QuickResponseCode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.QRC_id);
      stream.next(m.center_point);
      stream.next(m.angle);
      stream.next(m.cost_time);
      stream.next(m.time_stamp);
      stream.next(m.local_flag);
      stream.next(m.decode_flag);
      stream.next(m.ROI_local_flag);
      stream.next(m.relative_angle);
      stream.next(m.qrcp_point);
      stream.next(m.lccp_point);
      stream.next(m.num_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QuickResponseCode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qrc_msgs::QuickResponseCode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qrc_msgs::QuickResponseCode_<ContainerAllocator>& v)
  {
    s << indent << "QRC_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.QRC_id);
    s << indent << "center_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.center_point);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "cost_time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cost_time);
    s << indent << "time_stamp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time_stamp);
    s << indent << "local_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.local_flag);
    s << indent << "decode_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.decode_flag);
    s << indent << "ROI_local_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ROI_local_flag);
    s << indent << "relative_angle: ";
    Printer<float>::stream(s, indent + "  ", v.relative_angle);
    s << indent << "qrcp_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.qrcp_point);
    s << indent << "lccp_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.lccp_point);
    s << indent << "num_data[]" << std::endl;
    for (size_t i = 0; i < v.num_data.size(); ++i)
    {
      s << indent << "  num_data[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.num_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // QRC_MSGS_MESSAGE_QUICKRESPONSECODE_H
