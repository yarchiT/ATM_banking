#include "addcardform.h"
#include "ui_addcardform.h"

AddCardForm::AddCardForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddCardForm)
{
    ui->setupUi(this);
}

AddCardForm::~AddCardForm()
{
    delete ui;
}

void AddCardForm::on_goBack_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(1); //go to the user form
}


void AddCardForm::on_AddCard_clicked()
{

}
