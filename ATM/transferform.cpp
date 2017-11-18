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

void TransferForm::on_goBack_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(2); //go to the menu
}
