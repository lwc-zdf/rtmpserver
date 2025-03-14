#include "../EdoyunNet/EventLoop.h"
#include "EchoServer.h"

int main()
{
    int count = std::thread::hardware_concurrency();
    EventLoop loop(1);
    auto sig_server = EchoServer::Create(&loop);
    if(!sig_server->Start("192.168.2.205",6539))
    {
        printf("EchoServer failed\n");
    }
    printf("EchoServer success\n");
    getchar();
    return 0;
}

