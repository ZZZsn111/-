#include "udpserver.h"
#include "ui_udpserver.h"

UDPServer::UDPServer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UDPServer)
{
    ui->setupUi(this);
}

UDPServer::~UDPServer()
{
    delete ui;
}
