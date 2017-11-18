#ifndef BALANCEFORM_H
#define BALANCEFORM_H

#include <QWidget>

namespace Ui {
class BalanceForm;
}

class BalanceForm : public QWidget
{
    Q_OBJECT

public:
    explicit BalanceForm(QWidget *parent = 0);
    ~BalanceForm();

private:
    Ui::BalanceForm *ui;
};

#endif // BALANCEFORM_H
