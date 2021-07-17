#include "tcpconn.h"

TcpConn::TcpConn()
{

}

TcpConn::~TcpConn()
{

}

void TcpConn::startConn()
{
    /*
     * TCP监听，等待连接
     * */

}

void TcpConn::onNewconnection()
{
    /*
     * TCP接收到新的建立连接请求
     * */

}

void TcpConn::onReceiveMsg()
{
    /*
     * TCP接收消息后的回调函数
     * */

}

void TcpConn::recvClientInfo(QString msg)
{
    /*
     * 接收客户端发来的注册信息
     * */
}

void TcpConn::recvKeyboardEvent(QString msg)
{
    /*
     * 接收键盘事件
     * */
}

void TcpConn::recvMouseEvent(QString msg)
{
    /*
     * 接收鼠标事件
     * */

}

void TcpConn::sendControlledInfo(QString msg)
{
    /* 服务端验证控制请求后，将被控端信息发送给控制端
     *
     * */

}

