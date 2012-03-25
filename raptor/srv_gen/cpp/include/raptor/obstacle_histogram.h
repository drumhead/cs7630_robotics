/* Auto-generated by genmsg_cpp for file /home/dev/cs7630_robotics/raptor/srv/obstacle_histogram.srv */
#ifndef RAPTOR_SERVICE_OBSTACLE_HISTOGRAM_H
#define RAPTOR_SERVICE_OBSTACLE_HISTOGRAM_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace raptor
{
template <class ContainerAllocator>
struct obstacle_histogramRequest_ {
  typedef obstacle_histogramRequest_<ContainerAllocator> Type;

  obstacle_histogramRequest_()
  {
  }

  obstacle_histogramRequest_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "raptor/obstacle_histogramRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "32b16adfe6c7edca7f8b7db3d2790f8a"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::raptor::obstacle_histogramRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor::obstacle_histogramRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct obstacle_histogramRequest
typedef  ::raptor::obstacle_histogramRequest_<std::allocator<void> > obstacle_histogramRequest;

typedef boost::shared_ptr< ::raptor::obstacle_histogramRequest> obstacle_histogramRequestPtr;
typedef boost::shared_ptr< ::raptor::obstacle_histogramRequest const> obstacle_histogramRequestConstPtr;


template <class ContainerAllocator>
struct obstacle_histogramResponse_ {
  typedef obstacle_histogramResponse_<ContainerAllocator> Type;

  obstacle_histogramResponse_()
  : hist()
  {
    hist.assign(0);
  }

  obstacle_histogramResponse_(const ContainerAllocator& _alloc)
  : hist()
  {
    hist.assign(0);
  }

  typedef boost::array<int16_t, 41>  _hist_type;
  boost::array<int16_t, 41>  hist;


  ROS_DEPRECATED uint32_t get_hist_size() const { return (uint32_t)hist.size(); }
private:
  static const char* __s_getDataType_() { return "raptor/obstacle_histogramResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "32b16adfe6c7edca7f8b7db3d2790f8a"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "32b16adfe6c7edca7f8b7db3d2790f8a"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int16[41] hist\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, hist);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, hist);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(hist);
    return size;
  }

  typedef boost::shared_ptr< ::raptor::obstacle_histogramResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor::obstacle_histogramResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct obstacle_histogramResponse
typedef  ::raptor::obstacle_histogramResponse_<std::allocator<void> > obstacle_histogramResponse;

typedef boost::shared_ptr< ::raptor::obstacle_histogramResponse> obstacle_histogramResponsePtr;
typedef boost::shared_ptr< ::raptor::obstacle_histogramResponse const> obstacle_histogramResponseConstPtr;

struct obstacle_histogram
{

typedef obstacle_histogramRequest Request;
typedef obstacle_histogramResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct obstacle_histogram
} // namespace raptor

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::raptor::obstacle_histogramRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::raptor::obstacle_histogramRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::raptor::obstacle_histogramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::raptor::obstacle_histogramRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor::obstacle_histogramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "raptor/obstacle_histogramRequest";
  }

  static const char* value(const  ::raptor::obstacle_histogramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::raptor::obstacle_histogramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::raptor::obstacle_histogramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::raptor::obstacle_histogramRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::raptor::obstacle_histogramResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::raptor::obstacle_histogramResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::raptor::obstacle_histogramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "32b16adfe6c7edca7f8b7db3d2790f8a";
  }

  static const char* value(const  ::raptor::obstacle_histogramResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x32b16adfe6c7edcaULL;
  static const uint64_t static_value2 = 0x7f8b7db3d2790f8aULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor::obstacle_histogramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "raptor/obstacle_histogramResponse";
  }

  static const char* value(const  ::raptor::obstacle_histogramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::raptor::obstacle_histogramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int16[41] hist\n\
\n\
";
  }

  static const char* value(const  ::raptor::obstacle_histogramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::raptor::obstacle_histogramResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::raptor::obstacle_histogramRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct obstacle_histogramRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::raptor::obstacle_histogramResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.hist);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct obstacle_histogramResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<raptor::obstacle_histogram> {
  static const char* value() 
  {
    return "32b16adfe6c7edca7f8b7db3d2790f8a";
  }

  static const char* value(const raptor::obstacle_histogram&) { return value(); } 
};

template<>
struct DataType<raptor::obstacle_histogram> {
  static const char* value() 
  {
    return "raptor/obstacle_histogram";
  }

  static const char* value(const raptor::obstacle_histogram&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<raptor::obstacle_histogramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "32b16adfe6c7edca7f8b7db3d2790f8a";
  }

  static const char* value(const raptor::obstacle_histogramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<raptor::obstacle_histogramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "raptor/obstacle_histogram";
  }

  static const char* value(const raptor::obstacle_histogramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<raptor::obstacle_histogramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "32b16adfe6c7edca7f8b7db3d2790f8a";
  }

  static const char* value(const raptor::obstacle_histogramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<raptor::obstacle_histogramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "raptor/obstacle_histogram";
  }

  static const char* value(const raptor::obstacle_histogramResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // RAPTOR_SERVICE_OBSTACLE_HISTOGRAM_H

