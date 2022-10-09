#include <iostream>
#include "servicemanager.h"

const int SERVICE_CENTER_PORT = 20000;

int main()
{
    LOG_INFO << "pid = " << getpid() << ", tid = " << CurrentThread::tid();
    int numThreads = 3;
    EventLoop loop;
    InetAddress listenAddr(SERVICE_CENTER_PORT);
    ServiceManager server(&loop, listenAddr, numThreads);

    server.start();
    loop.loop();

    return 0;
}