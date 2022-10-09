
#include "serviceregistrycenter.h"




ServiceRegistryCenter::ServiceRegistryCenter()
{

}

ServiceRegistryCenter::~ServiceRegistryCenter()
{

}





void ServiceRegistryCenter::DealServiceRequest(const TcpConnectionPtr& conn, StarMsgProto::StarCmdMsg &starRequest)
{
    switch (starRequest.cmdmsg())
    {
        case REGISTER_ALL_SERVICE_CMD_CODE:
        {
            ServiceInfo svcInfo;
            svcInfo.strServiceName = starRequest.strbody();
            svcInfo.strIP = starRequest.strclientip();
            svcInfo.nPort = starRequest.nclientport();
            svcInfo.svcConn = &conn;
            svcInfo.svcStatus = STARTING;
            
            m_mServiceInfo.insert(map<int, ServiceInfo>::value_type(starRequest.serviceid(), svcInfo));
            starRequest.set_retcode(STAR_CMD_MSG_SUCCESS);
            break;
        }
        case SERVICE_START_CMD_CODE:
        {
            map<int, ServiceInfo>::iterator iter = m_mServiceInfo.find(starRequest.serviceid());
            if (iter != m_mServiceInfo.end())
            {
                iter->second.svcStatus = RUNNING;
            }
            starRequest.set_retcode(STAR_CMD_MSG_SUCCESS);
            break;
        }
        case SERVICE_START_SUCCESS_CMD_CODE:
        {
            map<int, ServiceInfo>::iterator iter = m_mServiceInfo.find(starRequest.serviceid());
            if (iter != m_mServiceInfo.end())
            {
                iter->second.svcStatus = RUNNING;
            }
            starRequest.set_retcode(STAR_CMD_MSG_SUCCESS);
            break;
        }
        case SERVICE_STOP_CMD_CODE:
        {
            map<int, ServiceInfo>::iterator iter = m_mServiceInfo.find(starRequest.serviceid());
            if (iter != m_mServiceInfo.end())
            {
                iter->second.svcStatus = STOPPING;
            }
            starRequest.set_retcode(STAR_CMD_MSG_SUCCESS);
            break;
        }
        case SERVICE_STOP_SUCCESS_CMD_CODE:
        {
            map<int, ServiceInfo>::iterator iter = m_mServiceInfo.find(starRequest.serviceid());
            if (iter != m_mServiceInfo.end())
            {
                iter->second.svcStatus = STOP;
            }
            starRequest.set_retcode(STAR_CMD_MSG_SUCCESS);
            break;
        }
        case QUERY_ALL_SERVICE_CMD_CODE:
        {
            
            break;
        }
        case QUERY_SERVICE_CMD_CODE:
        {

            break;
        }
        case UNREGISTER_ALL_SERVICE_CMD_CODE:
        {
            m_mServiceInfo.clear();
            starRequest.set_retcode(STAR_CMD_MSG_SUCCESS);
            break;
        }
        default:
        {
            break;
        }
    }
    
}

bool ServiceRegistryCenter::GetServiceConn(int serviceId, const TcpConnectionPtr *svcConn)
{
    map<int, ServiceInfo>::const_iterator iter = m_mServiceInfo.find(serviceId);
    if (iter != m_mServiceInfo.end())
    {
        svcConn = iter->second.svcConn;
        return true;
    }
    else
    {
        LOG_INFO << "ServiceRegistryCenter::GetServiceConn Fail!";
        return false;
    }
}

void ServiceRegistryCenter::DealServiceBroadCast(StarMsgProto::StarCmdMsg &starRequest)
{

}