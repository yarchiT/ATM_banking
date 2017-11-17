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

void MenuForm::on_deposit_clicked()
{
this->close();
}

void MenuForm::on_withdrawal_clicked()
{
this->close();
}

void MenuForm::on_transferToCard_clicked()
{
this->close();
}

void MenuForm::on_showBalance_clicked()
{
this->close();
}

void MenuForm::on_exit_clicked()
{
this->close();
}
