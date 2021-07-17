#include "tcpconn.h"

TcpConn::TcpConn()
{

}

TcpConn::~TcpConn()
{

}

void TcpConn::openConn()
{
    /*
     * 建立tcp连接
     * */

}

void TcpConn::sendMsg(QString msg)
{
    /*
     * 发送Msg
     * */
}

void TcpConn::recvMsg()
{
    /*
     * 接收消息
     * */
}

void TcpConn::closeConn()
{
    /*
     * 关闭连接
     * */
}

void TcpConn::onControlled()
{
    /*
     * 监听被控消息（建立连接后自动调用）
     * */
}

void TcpConn::sendClientInfo(QString msg)
{
    /*
     * 发送客户端的信息（建立连接后自动调用）
     * */
}

void TcpConn::sendEKeyboard()
{
    /*
     * 发送键盘事件
     * */
}

void TcpConn::sendEMouse()
{
    /*
     * 发送鼠标事件
     * */
}

void TcpConn::recvEKeyboard(QString msg)
{
    /*
     * 接收键盘事件
     * */
}

void TcpConn::recvEMouse(QString msg)
{
    /*
     * 接收鼠标事件
     * */
}

void TcpConn::handleKeyboardEvent(QString key)
{
    /*
     * 处理键盘事件
     * */
}

void TcpConn::handleMouseEvent(int x, int y, int type)
{
    /*
     * 处理鼠标事件
     * */
}



