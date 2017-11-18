#include "adduserform.h"
#include "ui_adduserform.h"

AddUserForm::AddUserForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddUserForm)
{
    ui->setupUi(this);
}

AddUserForm::~AddUserForm()
{
    delete ui;
}

void AddUserForm::on_goBack_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(0); //go to init window
}

