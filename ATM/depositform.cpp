#include "depositform.h"
#include "ui_depositform.h"

DepositForm::DepositForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DepositForm)
{
    ui->setupUi(this);
}

DepositForm::~DepositForm()
{
    delete ui;
}

void DepositForm::on_proceed_clicked()
{

}
