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
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(3);
}


void MenuForm::on_withdrawal_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(4);
}

void MenuForm::on_transferToCard_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(5);

}

void MenuForm::on_showBalance_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(6);
}

void MenuForm::on_exit_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(1); // go to the user form

}
