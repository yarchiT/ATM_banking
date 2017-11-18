#ifndef DEPOSITFORM_H
#define DEPOSITFORM_H

#include <QWidget>

namespace Ui {
class DepositForm;
}

class DepositForm : public QWidget
{
    Q_OBJECT

public:
    explicit DepositForm(QWidget *parent = 0);
    ~DepositForm();

private slots:
    void on_proceed_clicked();

private:
    Ui::DepositForm *ui;
};

#endif // DEPOSITFORM_H
