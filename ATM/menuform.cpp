#include "menuform.h"
#include "ui_menuform.h"

MenuForm::MenuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuForm)
{
    ui->setupUi(this);
}

MenuForm::~MenuForm()
{
    delete ui;
}

//set cardLabel
void MenuForm::setCardLabelName(QString str)
{
    ui->cardLabel->setText(str + " card");
}

void MenuForm::on_deposit_clicked()
{
    depositForm = new DepositForm();
    depositForm->show();
    this->close();
}


void MenuForm::on_withdrawal_clicked()
{
    withdrawalForm = new WithdrawalForm();
    withdrawalForm->show();
    this->close();
}

void MenuForm::on_transferToCard_clicked()
{
    transferForm = new TransferForm();
    transferForm->show();
    this->close();

}

void MenuForm::on_showBalance_clicked()
{
    balanceForm = new BalanceForm();
    balanceForm->show();
    this->close();
}

void MenuForm::on_exit_clicked()
{
this->close();
}
