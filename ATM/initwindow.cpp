#include "initwindow.h"
#include "ui_initwindow.h"

InitWindow::InitWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InitWindow)
{
    ui->setupUi(this);
}

InitWindow::~InitWindow()
{
    delete ui;
}

void InitWindow::on_submit_clicked()
{
    number = ui->numberLine->text();
        password = ui->passLine->text();
        qDebug() << "number: " + number;
        qDebug() << "password: " + password;

    userForm = new UserForm();
    userForm->show();
    this->close();

}

void InitWindow::on_addUser_clicked()
{
    addUser = new AddUserForm();
    addUser->show();
    this->close();
}
