#include "servicemanager.h"

#include "muduo/base/Logging.h"

using std::placeholders::_1;
using std::placeholders::_2;
using std::placeholders::_3;

#define _GLIBCXX_USE_CXX11_ABI 0


void ServiceManager::onConnection(const TcpConnectionPtr& conn)
{
  LOG_INFO << "ServiceManager - " << conn->peerAddress().toIpPort() << " -> "
           << conn->localAddress().toIpPort() << " is "
           << (conn->connected() ? "UP" : "DOWN");
}

void ServiceManager::onMessage(const TcpConnectionPtr& conn,
                           muduo::net::Buffer* buf,
                           muduo::Timestamp time)
{
    muduo::string request(buf->retrieveAllAsString());
    LOG_INFO << request;
    DealCmdMsg(conn, request);
}

int ServiceManager::DealCmdMsg(const TcpConnectionPtr& conn, const string& request)
{
    threadPool_.run(std::bind(&processRequest, this, conn, request));
    return 0;
}

void ServiceManager::processRequest(ServiceManager *svcMgr, const TcpConnectionPtr& conn, const string& request)
{
    LOG_DEBUG << conn->name();
    LOG_DEBUG << request;

    StarMsgProto::StarCmdMsg starRequest;
    starRequest.ParseFromString(request);

    if (starRequest.msgtype() == StarMsgProto::REQUEST)
    {
        svcMgr->GetServiceRegisterCenter().DealServiceRequest(conn, starRequest);
        starRequest.set_msgtype(StarMsgProto::RESPONSE);
        string response = starRequest.SerializeAsString();
        svcMgr->GetThreadPoolHandle().run(std::bind(&processRequest, svcMgr, conn, request));
    }
    else if (starRequest.msgtype() == StarMsgProto::RESPONSE)
    {
        //根据服务ID，获取服务端conn
        const TcpConnectionPtr *svcConn = nullptr;
        svcMgr->GetServiceRegisterCenter().GetServiceConn(starRequest.serviceid(), svcConn);
        string response = starRequest.SerializeAsString();
        (*svcConn)->send(response);
    }
    else if (starRequest.msgtype() == StarMsgProto::BROADCAST)
    {
        svcMgr->GetServiceRegisterCenter().DealServiceBroadCast(starRequest);
    }
    else
    {
        LOG_INFO << "msgtype is error!";
    }
}
