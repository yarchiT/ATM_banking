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
