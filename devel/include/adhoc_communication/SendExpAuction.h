// Generated by gencpp from file adhoc_communication/SendExpAuction.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_SENDEXPAUCTION_H
#define ADHOC_COMMUNICATION_MESSAGE_SENDEXPAUCTION_H

#include <ros/service_traits.h>


#include <adhoc_communication/SendExpAuctionRequest.h>
#include <adhoc_communication/SendExpAuctionResponse.h>


namespace adhoc_communication
{

struct SendExpAuction
{

typedef SendExpAuctionRequest Request;
typedef SendExpAuctionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SendExpAuction
} // namespace adhoc_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::adhoc_communication::SendExpAuction > {
  static const char* value()
  {
    return "ff9ea50dac4ae5fb2075cab78b2fc2b9";
  }

  static const char* value(const ::adhoc_communication::SendExpAuction&) { return value(); }
};

template<>
struct DataType< ::adhoc_communication::SendExpAuction > {
  static const char* value()
  {
    return "adhoc_communication/SendExpAuction";
  }

  static const char* value(const ::adhoc_communication::SendExpAuction&) { return value(); }
};


// service_traits::MD5Sum< ::adhoc_communication::SendExpAuctionRequest> should match 
// service_traits::MD5Sum< ::adhoc_communication::SendExpAuction > 
template<>
struct MD5Sum< ::adhoc_communication::SendExpAuctionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::adhoc_communication::SendExpAuction >::value();
  }
  static const char* value(const ::adhoc_communication::SendExpAuctionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::adhoc_communication::SendExpAuctionRequest> should match 
// service_traits::DataType< ::adhoc_communication::SendExpAuction > 
template<>
struct DataType< ::adhoc_communication::SendExpAuctionRequest>
{
  static const char* value()
  {
    return DataType< ::adhoc_communication::SendExpAuction >::value();
  }
  static const char* value(const ::adhoc_communication::SendExpAuctionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::adhoc_communication::SendExpAuctionResponse> should match 
// service_traits::MD5Sum< ::adhoc_communication::SendExpAuction > 
template<>
struct MD5Sum< ::adhoc_communication::SendExpAuctionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::adhoc_communication::SendExpAuction >::value();
  }
  static const char* value(const ::adhoc_communication::SendExpAuctionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::adhoc_communication::SendExpAuctionResponse> should match 
// service_traits::DataType< ::adhoc_communication::SendExpAuction > 
template<>
struct DataType< ::adhoc_communication::SendExpAuctionResponse>
{
  static const char* value()
  {
    return DataType< ::adhoc_communication::SendExpAuction >::value();
  }
  static const char* value(const ::adhoc_communication::SendExpAuctionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_SENDEXPAUCTION_H
