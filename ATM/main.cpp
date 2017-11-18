#include "initwindow.h"
#include "menuform.h"
#include <QApplication>
//#include "staticbanklib.h"
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QValidator>
int main(int argc, char *argv[])
{
    //StaticBankLib bLib;
   // bLib.Test();
    QApplication a(argc, argv);


    QStackedWidget *stackedWidget = new QStackedWidget;
    stackedWidget->setFixedSize(400,300);

    InitWindow *initWindow = new InitWindow(); //0
    UserForm *userForm = new UserForm();//1
    MenuForm *menuForm = new MenuForm();//2
    DepositForm *depositForm = new DepositForm();//3
    WithdrawalForm *withdrawalForm = new WithdrawalForm();//4
    TransferForm *transferForm = new TransferForm();//5
    BalanceForm *balanceForm = new BalanceForm();//6
    AddCardForm *addCartForm = new AddCardForm();//7
    AddUserForm *addUserForm = new AddUserForm();//8

    stackedWidget->addWidget(initWindow);
    stackedWidget->addWidget(userForm);
    stackedWidget->addWidget(menuForm);
    stackedWidget->addWidget(depositForm);
    stackedWidget->addWidget(withdrawalForm);
    stackedWidget->addWidget(transferForm);
    stackedWidget->addWidget(balanceForm);
    stackedWidget->addWidget(addCartForm);
    stackedWidget->addWidget(addUserForm);



    stackedWidget->show();


    return a.exec();
}

