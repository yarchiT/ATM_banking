/********************************************************************************
** Form generated from reading UI file 'userform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFORM_H
#define UI_USERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserForm
{
public:
    QLabel *label;
    QPushButton *card1;
    QPushButton *addCard;
    QPushButton *removeCard;

    void setupUi(QWidget *UserForm)
    {
        if (UserForm->objectName().isEmpty())
            UserForm->setObjectName(QStringLiteral("UserForm"));
        UserForm->resize(400, 300);
        label = new QLabel(UserForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 91, 16));
        card1 = new QPushButton(UserForm);
        card1->setObjectName(QStringLiteral("card1"));
        card1->setGeometry(QRect(20, 80, 113, 32));
        addCard = new QPushButton(UserForm);
        addCard->setObjectName(QStringLiteral("addCard"));
        addCard->setGeometry(QRect(260, 60, 113, 32));
        removeCard = new QPushButton(UserForm);
        removeCard->setObjectName(QStringLiteral("removeCard"));
        removeCard->setGeometry(QRect(260, 100, 113, 32));

        retranslateUi(UserForm);

        QMetaObject::connectSlotsByName(UserForm);
    } // setupUi

    void retranslateUi(QWidget *UserForm)
    {
        UserForm->setWindowTitle(QApplication::translate("UserForm", "Form", 0));
        label->setText(QApplication::translate("UserForm", "user name", 0));
        card1->setText(QApplication::translate("UserForm", "card1", 0));
        addCard->setText(QApplication::translate("UserForm", "add card", 0));
        removeCard->setText(QApplication::translate("UserForm", "remove card", 0));
    } // retranslateUi

};

namespace Ui {
    class UserForm: public Ui_UserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFORM_H
