#-------------------------------------------------
#
# Project created by QtCreator 2021-07-17T19:38:51
#
#-------------------------------------------------

QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Demo1
TEMPLATE = app


SOURCES += main.cpp\
        demo1.cpp \
    udpconn.cpp \
    tcpconn.cpp

HEADERS  += demo1.h \
    udpconn.h \
    tcpconn.h

FORMS    += demo1.ui \
    connect.ui
