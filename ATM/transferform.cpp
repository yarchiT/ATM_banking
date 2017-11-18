#include "transferform.h"
#include "ui_transferform.h"

TransferForm::TransferForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransferForm)
{
    ui->setupUi(this);
}

TransferForm::~TransferForm()
{
    delete ui;
}
