#ifndef TCPCONN_H
#define TCPCONN_H

#include <QTcpSocket>

struct ClientInfo{
    QString id;
    QString pwd;
    QString ip;
    QString port;
};

class TcpConn
{
public:
    TcpConn();
    ~TcpConn();
    ClientInfo clientinfo;
    QTcpSocket tcp;

public: //TCP操作
    void openConn();
    void sendMsg(QString msg);
    void recvMsg();
    void closeConn();
public:
    void onControlled();
    void sendClientInfo(QString msg);

public: //消息处理
    void sendEKeyboard();
    void sendEMouse();

public:
    void recvEKeyboard(QString msg);
    void recvEMouse(QString msg);
    void handleKeyboardEvent(QString key);
    void handleMouseEvent(int x, int y, int type);
};



#endif // TCPCONN_H
