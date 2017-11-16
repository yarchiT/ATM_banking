#ifndef INITWINDOW_H
#define INITWINDOW_H

#include <QMainWindow>
#include "userform.h"

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
};

#endif // INITWINDOW_H
