#ifndef __REGISTER_SERVER__
#define __REGISTER_SERVER__

#include "muduo/net/TcpServer.h"
#include "muduo/base/Logging.h"
#include "muduo/net/EventLoop.h"
#include "serviceregistrycenter.h"

using namespace muduo;
using namespace muduo::net;

class RegisterServer
{
 public:
    RegisterServer(EventLoop* loop, const InetAddress& listenAddr);

    void start();  // calls server_.start();

private:
    void onConnection(const TcpConnectionPtr& conn);

    void onMessage(const TcpConnectionPtr& conn,
                 Buffer* buf,
                 Timestamp time);
    int DealCmdMessage(const TcpConnectionPtr& conn, string &request, string &response);

private:
    TcpServer server_;
    ServiceRegistryCenter m_svcRegCenter;
};

#endif  // __REGISTER_SERVER__
