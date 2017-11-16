/********************************************************************************
** Form generated from reading UI file 'initwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITWINDOW_H
#define UI_INITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *submit;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InitWindow)
    {
        if (InitWindow->objectName().isEmpty())
            InitWindow->setObjectName(QStringLiteral("InitWindow"));
        InitWindow->resize(400, 300);
        centralWidget = new QWidget(InitWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 151, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 50, 60, 16));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 50, 113, 21));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 80, 113, 21));
        submit = new QPushButton(centralWidget);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setGeometry(QRect(180, 180, 113, 32));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 180, 113, 32));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 60, 16));
        InitWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InitWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        InitWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(InitWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        InitWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(InitWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        InitWindow->setStatusBar(statusBar);

        retranslateUi(InitWindow);

        QMetaObject::connectSlotsByName(InitWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InitWindow)
    {
        InitWindow->setWindowTitle(QApplication::translate("InitWindow", "InitWindow", 0));
        label->setText(QApplication::translate("InitWindow", "Enter your credintals", 0));
        label_3->setText(QApplication::translate("InitWindow", "number", 0));
        submit->setText(QApplication::translate("InitWindow", "submit", 0));
        pushButton->setText(QApplication::translate("InitWindow", "Exit", 0));
        label_2->setText(QApplication::translate("InitWindow", "password", 0));
    } // retranslateUi

};

namespace Ui {
    class InitWindow: public Ui_InitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITWINDOW_H
