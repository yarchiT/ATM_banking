#include "userform.h"
#include "ui_userform.h"

UserForm::UserForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserForm)
{
    ui->setupUi(this);
}

UserForm::~UserForm()
{
    delete ui;
}

void UserForm::on_card1_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(2);//go to the menu form
}

void UserForm::on_addCard_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(7); //go to add cart form

}

void UserForm::on_goBack_clicked()
{
    qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(0); //go to init window
}
