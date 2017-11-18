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
      menuForm = new MenuForm();
    QString card1 = ui->card1->text();
    menuForm->setCardLabelName(card1);

    menuForm->show();
    this->close();
}
