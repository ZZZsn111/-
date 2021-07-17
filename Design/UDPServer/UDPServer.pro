#-------------------------------------------------
#
# Project created by QtCreator 2021-07-17T20:06:45
#
#-------------------------------------------------

QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UDPServer
TEMPLATE = app


SOURCES += main.cpp\
        udpserver.cpp \
    tcpconn.cpp

HEADERS  += udpserver.h \
    tcpconn.h

FORMS    += udpserver.ui
