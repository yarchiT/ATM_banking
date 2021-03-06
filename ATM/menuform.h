#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>

#include "depositform.h"
#include "withdrawalform.h"
#include "balanceform.h"
#include "transferform.h"

namespace Ui {
class MenuForm;
}

class MenuForm : public QWidget
{
    Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = 0);
    void setCardLabelName(QString str);
    ~MenuForm();

private slots:
    void on_deposit_clicked();

    void on_withdrawal_clicked();

    void on_transferToCard_clicked();

    void on_showBalance_clicked();

    void on_exit_clicked();

private:
    Ui::MenuForm *ui;
    DepositForm *depositForm;
    WithdrawalForm *withdrawalForm;
    BalanceForm *balanceForm;
    TransferForm *transferForm;

};

#endif // MENUFORM_H
