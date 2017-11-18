#ifndef USERFORM_H
#define USERFORM_H

#include <QWidget>
#include "menuform.h"
#include "addcardform.h"
#include "QStackedWidget"

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

    void on_addCard_clicked();

    void on_goBack_clicked();

private:
    Ui::UserForm *ui;
    MenuForm *menuForm;
    AddCardForm *newCardForm;
};

#endif // USERFORM_H
