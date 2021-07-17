#ifndef UDPCONN_H
#define UDPCONN_H
#include <QUdpSocket>
#include <QString>
#include <QList>
#include <QThread>
class UdpConn
{
public:
    UdpConn();
    ~UdpConn();
    QUdpSocket udp;
    QString ip;
    QString port;
public:
    bool connectUdp(QString ip, QString port);
    void sendPic();
    void receivePic();
    bool closeUdp();

};

#endif // UDPCONN_H
