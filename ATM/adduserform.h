#ifndef ADDUSERFORM_H
#define ADDUSERFORM_H

#include <QWidget>

namespace Ui {
class AddUserForm;
}

class AddUserForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddUserForm(QWidget *parent = 0);
    ~AddUserForm();

private:
    Ui::AddUserForm *ui;
};

#endif // ADDUSERFORM_H
