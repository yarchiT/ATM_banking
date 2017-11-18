#ifndef BALANCEFORM_H
#define BALANCEFORM_H

#include <QWidget>
#include <QStackedWidget>

namespace Ui {
class BalanceForm;
}

class BalanceForm : public QWidget
{
    Q_OBJECT

public:
    explicit BalanceForm(QWidget *parent = 0);
    ~BalanceForm();

private slots:
    void on_goBack_clicked();

private:
    Ui::BalanceForm *ui;
};

#endif // BALANCEFORM_H
