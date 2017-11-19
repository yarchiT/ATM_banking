#-------------------------------------------------
#
# Project created by QtCreator 2017-11-16T21:50:06
#
#-------------------------------------------------

QT       -= gui

TARGET = staticBankLib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += staticbanklib.cpp \
    authorization.cpp \
    userlist.cpp \
    user.cpp

HEADERS += staticbanklib.h \
    authorization.h \
    userlist.h \
    user.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
