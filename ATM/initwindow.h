#ifndef INITWINDOW_H
#define INITWINDOW_H

#include <QMainWindow>
#include "userform.h"
#include "adduserform.h"
#include <QDebug>
#include <QStackedWidget>
#include <QLineEdit>

namespace Ui {
class InitWindow;
}

class InitWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InitWindow(QWidget *parent = 0);
    ~InitWindow();

private slots:
    void on_submit_clicked();

    void on_addUser_clicked();

    void on_exitButton_clicked();

private:
    Ui::InitWindow *ui;
    UserForm *userForm;
    AddUserForm *addUser;
    QString number;
    QString password;
};

#endif // INITWINDOW_H
