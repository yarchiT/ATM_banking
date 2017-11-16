#-------------------------------------------------
#
# Project created by QtCreator 2017-11-16T21:50:06
#
#-------------------------------------------------

QT       -= gui

TARGET = staticBankLib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += staticbanklib.cpp

HEADERS += staticbanklib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
