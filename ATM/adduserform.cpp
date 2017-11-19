#include "adduserform.h"
#include "ui_adduserform.h"
#include "userlist.h"
#include <QDebug>

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


void AddUserForm::on_addUser_clicked()
{
    QString name = ui->userName->text();
    QString lastName = ui->userLastName->text();
    QString email = ui->userEmail->text();
    QString phoneNumber = ui->userPhoneNumber->text();
    QString password = ui->userPassword->text();
    User user(phoneNumber,password,email,name,lastName);
    UserList::addUser(user);
    qDebug()<<"User created";
}
