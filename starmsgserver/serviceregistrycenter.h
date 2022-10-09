/*
-------------------------------------------------------------
ServiceRegistryCenter
 ------------------------------------------------------------
 */

#ifndef __SERVICE_REGISTRY_CENTER__
#define __SERVICE_REGISTRY_CENTER__

#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "muduo/net/TcpServer.h"
#include "muduo/base/Logging.h"
#include "muduo/net/EventLoop.h"
#include "starmsgproto.pb.h"
#include "muduo/base/Logging.h"

using namespace std;
using namespace muduo;
using namespace muduo::net;


enum ServiceStatus
{
    STARTING = 0,
    RUNNING = 1,
    STOPPING = 2,
    STOP = 3
};

struct ServiceInfo
{
    const TcpConnectionPtr *svcConn;
    string strServiceName;
    string strIP;
    int nPort;
    ServiceStatus svcStatus;
};


//命令码
const int REGISTER_ALL_SERVICE_CMD_CODE = 1;
const int SERVICE_START_CMD_CODE = 2;
const int SERVICE_START_SUCCESS_CMD_CODE = 3;
const int SERVICE_STOP_CMD_CODE = 4;
const int SERVICE_STOP_SUCCESS_CMD_CODE = 5;
const int UNREGISTER_ALL_SERVICE_CMD_CODE = 6;

const int QUERY_ALL_SERVICE_CMD_CODE = 7;
const int QUERY_SERVICE_CMD_CODE = 8;


//返回码
const int STAR_CMD_MSG_SUCCESS = 0;
const int STAR_CMD_MSG_FAIL = -1;

class ServiceRegistryCenter
{

public:
    ServiceRegistryCenter();
    ~ServiceRegistryCenter();

    int DealCmdMessage(string &request, string &response);

public:
    void DealServiceRequest(const TcpConnectionPtr& conn, StarMsgProto::StarCmdMsg &starCmdMsg);
    bool GetServiceConn(int serviceId, const TcpConnectionPtr *svcConn);

    void DealServiceBroadCast(StarMsgProto::StarCmdMsg &starCmdMsg);
private:
    map<int, ServiceInfo> m_mServiceInfo;
    StarMsgProto::StarCmdMsg m_starCmdMsg;
};

#endif