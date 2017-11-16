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

}

void MenuForm::on_withdrawal_clicked()
{

}

void MenuForm::on_transferToCard_clicked()
{

}

void MenuForm::on_showBalance_clicked()
{

}

void MenuForm::on_exit_clicked()
{

}
