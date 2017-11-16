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
    userForm = new UserForm();
    userForm->show();
}
