/********************************************************************************
** Form generated from reading UI file 'udpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSERVER_H
#define UI_UDPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_UDPServer
{
public:

    void setupUi(QDialog *UDPServer)
    {
        if (UDPServer->objectName().isEmpty())
            UDPServer->setObjectName(QStringLiteral("UDPServer"));
        UDPServer->resize(400, 300);

        retranslateUi(UDPServer);

        QMetaObject::connectSlotsByName(UDPServer);
    } // setupUi

    void retranslateUi(QDialog *UDPServer)
    {
        UDPServer->setWindowTitle(QApplication::translate("UDPServer", "UDPServer", 0));
    } // retranslateUi

};

namespace Ui {
    class UDPServer: public Ui_UDPServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSERVER_H
