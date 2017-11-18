/********************************************************************************
** Form generated from reading UI file 'transferform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERFORM_H
#define UI_TRANSFERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransferForm
{
public:
    QPushButton *backButton;

    void setupUi(QWidget *TransferForm)
    {
        if (TransferForm->objectName().isEmpty())
            TransferForm->setObjectName(QStringLiteral("TransferForm"));
        TransferForm->resize(400, 300);
        backButton = new QPushButton(TransferForm);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(70, 160, 99, 27));

        retranslateUi(TransferForm);

        QMetaObject::connectSlotsByName(TransferForm);
    } // setupUi

    void retranslateUi(QWidget *TransferForm)
    {
        TransferForm->setWindowTitle(QApplication::translate("TransferForm", "Form", 0));
        backButton->setText(QApplication::translate("TransferForm", "back", 0));
    } // retranslateUi

};

namespace Ui {
    class TransferForm: public Ui_TransferForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERFORM_H
