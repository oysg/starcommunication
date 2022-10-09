#ifndef __REGISTER_SERVER__
#define __REGISTER_SERVER__

#include "muduo/net/TcpServer.h"
#include "muduo/base/Logging.h"
#include "muduo/net/EventLoop.h"
#include "muduo/base/Thread.h"
#include "muduo/base/ThreadPool.h"
#include "serviceregistrycenter.h"

using namespace muduo;
using namespace muduo::net;


class ServiceManager
{
public:
    ServiceManager(EventLoop* loop, const InetAddress& listenAddr, int numThreads)
        : server_(loop, listenAddr, "ServiceManager"),
        numThreads_(numThreads),
        startTime_(Timestamp::now())
    {
        server_.setConnectionCallback(
            std::bind(&ServiceManager::onConnection, this, _1));
        server_.setMessageCallback(
            std::bind(&ServiceManager::onMessage, this, _1, _2, _3));
    }

    void start()
    {
        LOG_INFO << "starting " << numThreads_ << " threads.";
        threadPool_.start(numThreads_);
        server_.start();
    }

    ServiceRegistryCenter& GetServiceRegisterCenter()
    {
        return m_svcRegCenter;
    }

    ThreadPool& GetThreadPoolHandle()
    {
        return threadPool_;
    }

private:
    void onConnection(const TcpConnectionPtr& conn);

    void onMessage(const TcpConnectionPtr& conn, Buffer* buf, Timestamp);

    int DealCmdMsg(const TcpConnectionPtr& conn, const string& request);

    static void processRequest(ServiceManager *svcMgr, const TcpConnectionPtr& conn, const string& request);

private:
  TcpServer server_;
  ThreadPool threadPool_;
  int numThreads_;
  Timestamp startTime_;
  ServiceRegistryCenter m_svcRegCenter;
};

#endif  // __REGISTER_SERVER__
