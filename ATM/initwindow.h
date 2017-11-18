#ifndef INITWINDOW_H
#define INITWINDOW_H

#include <QMainWindow>
#include "userform.h"
#include <QDebug>

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

private:
    Ui::InitWindow *ui;
    UserForm *userForm;
    QString number;
    QString password;
};

#endif // INITWINDOW_H
