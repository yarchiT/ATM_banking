#ifndef USERFORM_H
#define USERFORM_H

#include <QWidget>
#include "menuform.h"

namespace Ui {
class UserForm;
}

class UserForm : public QWidget
{
    Q_OBJECT

public:
    explicit UserForm(QWidget *parent = 0);
    ~UserForm();

private slots:
    void on_card1_clicked();

private:
    Ui::UserForm *ui;
    MenuForm *menuForm;
};

#endif // USERFORM_H
