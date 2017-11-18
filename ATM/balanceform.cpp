#include "balanceform.h"
#include "ui_balanceform.h"

BalanceForm::BalanceForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BalanceForm)
{
    ui->setupUi(this);
}

BalanceForm::~BalanceForm()
{
    delete ui;
}

void BalanceForm::on_goBack_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(2); //go to the menu form
}
