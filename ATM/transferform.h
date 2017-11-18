#ifndef TRANSFERFORM_H
#define TRANSFERFORM_H

#include <QWidget>

namespace Ui {
class TransferForm;
}

class TransferForm : public QWidget
{
    Q_OBJECT

public:
    explicit TransferForm(QWidget *parent = 0);
    ~TransferForm();

private:
    Ui::TransferForm *ui;
};

#endif // TRANSFERFORM_H
