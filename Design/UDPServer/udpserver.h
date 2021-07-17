#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QDialog>
#include <QList>
#include <QString>

struct ClientInfo;

namespace Ui {
class UDPServer;
}

class UDPServer : public QDialog
{
    Q_OBJECT

public:
    explicit UDPServer(QWidget *parent = 0);
    ~UDPServer();
    QList<ClientInfo> ClientInfos;

private:
    Ui::UDPServer *ui;
public:

};

struct ClientInfo{
    QString id;
    QString pwd;
    QString ip;
    QString port;
};
#endif // UDPSERVER_H
