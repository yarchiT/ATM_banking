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

qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(1);

}

void InitWindow::on_addUser_clicked()
{
   qobject_cast<QStackedWidget *>(parentWidget())->setCurrentIndex(8);
}

void InitWindow::on_exitButton_clicked()
{
    this->close();
}
