#-------------------------------------------------
#
# Project created by QtCreator 2017-11-16T17:39:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ATM_Banking
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        initwindow.cpp \
    userform.cpp \
    menuform.cpp \
    depositform.cpp \
    withdrawalform.cpp \
    balanceform.cpp \
    adduserform.cpp \
    addcardform.cpp \
    transferform.cpp

HEADERS += \
        initwindow.h \
    userform.h \
    menuform.h \ #\
    depositform.h \
    withdrawalform.h \
    balanceform.h \
    adduserform.h \
    addcardform.h \
    transferform.h
   # ../staticBankLib/staticbanklib.h

FORMS += \
        initwindow.ui \
    userform.ui \
    menuform.ui \
    depositform.ui \
    withdrawalform.ui \
    balanceform.ui \
    adduserform.ui \
    addcardform.ui \
    transferform.ui

#INCLUDEPATH += "../staticBankLib"
#LIBS += "../build-staticBankLib-Desktop-Debug/libstaticBankLib.a"
