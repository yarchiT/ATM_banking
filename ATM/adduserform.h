#ifndef ADDUSERFORM_H
#define ADDUSERFORM_H

#include <QWidget>
#include <QStackedWidget>

namespace Ui {
class AddUserForm;
}

class AddUserForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddUserForm(QWidget *parent = 0);
    ~AddUserForm();

private slots:
    void on_goBack_clicked();


    void on_addUser_clicked();

private:
    Ui::AddUserForm *ui;
};

#endif // ADDUSERFORM_H
