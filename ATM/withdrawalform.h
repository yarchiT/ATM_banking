#ifndef WITHDRAWALFORM_H
#define WITHDRAWALFORM_H

#include <QWidget>
//#include "menuform.h"
#include <QStackedWidget>

namespace Ui {
class WithdrawalForm;
}

class WithdrawalForm : public QWidget
{
    Q_OBJECT

public:
    explicit WithdrawalForm(QWidget *parent = 0);
    ~WithdrawalForm();

private slots:
    void on_goBack_clicked();

private:
    Ui::WithdrawalForm *ui;
    //MenuForm *menuForm;
};

#endif // WITHDRAWALFORM_H
