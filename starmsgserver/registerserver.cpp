#include "registerserver.h"

#include "muduo/base/Logging.h"

using std::placeholders::_1;
using std::placeholders::_2;
using std::placeholders::_3;

#define _GLIBCXX_USE_CXX11_ABI 0

RegisterServer::RegisterServer(EventLoop* loop,
                       const InetAddress& listenAddr)
  : server_(loop, listenAddr, "RegisterServer")
{
  server_.setConnectionCallback(
      std::bind(&RegisterServer::onConnection, this, _1));
  server_.setMessageCallback(
      std::bind(&RegisterServer::onMessage, this, _1, _2, _3));
}

void RegisterServer::start()
{
  server_.start();
}

void RegisterServer::onConnection(const TcpConnectionPtr& conn)
{
  LOG_INFO << "RegisterServer - " << conn->peerAddress().toIpPort() << " -> "
           << conn->localAddress().toIpPort() << " is "
           << (conn->connected() ? "UP" : "DOWN");
}

void RegisterServer::onMessage(const TcpConnectionPtr& conn,
                           muduo::net::Buffer* buf,
                           muduo::Timestamp time)
{
    muduo::string request(buf->retrieveAllAsString());
    LOG_INFO << request;
    muduo::string response;
    DealCmdMessage(conn, request, response);
}

int RegisterServer::DealCmdMessage(const TcpConnectionPtr& conn, string &request, string &response)
{
    StarMsgProto::StarCmdMsg starRequest;
    starRequest.ParseFromString(request);

    if (starRequest.msgtype() == StarMsgProto::REQUEST)
    {
        m_svcRegCenter.DealServiceRequest(starRequest);
        response = starRequest.SerializeAsString();
        conn->send(response);
    }
    else if (starRequest.msgtype() == StarMsgProto::BROADCAST)
    {
        m_svcRegCenter.DealServiceBroadCast(starRequest);
    }
    else
    {
        LOG_INFO << "msgtype is error!";
    }

    
    return 0;
}
