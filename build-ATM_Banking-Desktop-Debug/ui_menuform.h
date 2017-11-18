/********************************************************************************
** Form generated from reading UI file 'menuform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUFORM_H
#define UI_MENUFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuForm
{
public:
    QLabel *label;
    QPushButton *deposit;
    QPushButton *withdrawal;
    QPushButton *transferToCard;
    QPushButton *exit;
    QLabel *cardLabel;
    QPushButton *showBalance;

    void setupUi(QWidget *MenuForm)
    {
        if (MenuForm->objectName().isEmpty())
            MenuForm->setObjectName(QStringLiteral("MenuForm"));
        MenuForm->resize(400, 300);
        label = new QLabel(MenuForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 60, 60, 16));
        deposit = new QPushButton(MenuForm);
        deposit->setObjectName(QStringLiteral("deposit"));
        deposit->setGeometry(QRect(20, 100, 131, 32));
        deposit->setCursor(QCursor(Qt::PointingHandCursor));
        withdrawal = new QPushButton(MenuForm);
        withdrawal->setObjectName(QStringLiteral("withdrawal"));
        withdrawal->setGeometry(QRect(220, 100, 131, 32));
        withdrawal->setCursor(QCursor(Qt::PointingHandCursor));
        transferToCard = new QPushButton(MenuForm);
        transferToCard->setObjectName(QStringLiteral("transferToCard"));
        transferToCard->setGeometry(QRect(20, 150, 131, 32));
        transferToCard->setCursor(QCursor(Qt::PointingHandCursor));
        exit = new QPushButton(MenuForm);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(150, 240, 113, 32));
        exit->setCursor(QCursor(Qt::PointingHandCursor));
        cardLabel = new QLabel(MenuForm);
        cardLabel->setObjectName(QStringLiteral("cardLabel"));
        cardLabel->setGeometry(QRect(110, 20, 171, 20));
        QFont font;
        font.setPointSize(12);
        cardLabel->setFont(font);
        showBalance = new QPushButton(MenuForm);
        showBalance->setObjectName(QStringLiteral("showBalance"));
        showBalance->setGeometry(QRect(220, 150, 131, 32));
        showBalance->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(MenuForm);

        QMetaObject::connectSlotsByName(MenuForm);
    } // setupUi

    void retranslateUi(QWidget *MenuForm)
    {
        MenuForm->setWindowTitle(QApplication::translate("MenuForm", "Form", 0));
        label->setText(QApplication::translate("MenuForm", "Menu", 0));
        deposit->setText(QApplication::translate("MenuForm", "deposit", 0));
        withdrawal->setText(QApplication::translate("MenuForm", "withdrawal", 0));
        transferToCard->setText(QApplication::translate("MenuForm", "transfer to card", 0));
        exit->setText(QApplication::translate("MenuForm", "Exit", 0));
        cardLabel->setText(QString());
        showBalance->setText(QApplication::translate("MenuForm", "show balance", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuForm: public Ui_MenuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUFORM_H
