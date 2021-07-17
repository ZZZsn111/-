#ifndef TCPCONN_H
#define TCPCONN_H
#include <QTcpServer>
#include <QString>
#include <QList>
#include <QVector>
#include "udpserver.h"

class TcpConn
{
public:
    TcpConn();
    ~TcpConn();
    QTcpServer tcp;
    QVector<ClientInfo> clientinfos; //所有注册的客户端信息

public:
    void startConn();
    void onNewconnection();
    void onReceiveMsg();

public:
    void recvClientInfo(QString msg);
    void recvKeyboardEvent(QString msg);
    void recvMouseEvent(QString msg);
    void sendControlledInfo(QString msg);


};

#endif // TCPCONN_H
