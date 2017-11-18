#include "transferform.h"
#include "ui_transferform.h"

TransferForm::TransferForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transferForm)
{
    ui->setupUi(this);
}

TransferForm::~TransferForm()
{
    delete ui;
}
