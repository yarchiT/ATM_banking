#include "withdrawalform.h"
#include "ui_withdrawalform.h"

WithdrawalForm::WithdrawalForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WithdrawalForm)
{
    ui->setupUi(this);
}

WithdrawalForm::~WithdrawalForm()
{
    delete ui;
}

void WithdrawalForm::on_goBack_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(2);//go to the menu form form
}
