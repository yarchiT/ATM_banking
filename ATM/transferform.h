#ifndef TRANSFERFORM_H
#define TRANSFERFORM_H

#include <QWidget>
#include <QStackedWidget>

namespace Ui {
class transferForm;
}

class TransferForm : public QWidget
{
    Q_OBJECT

public:
    explicit TransferForm(QWidget *parent = 0);
    ~TransferForm();

private slots:
    void on_goBack_clicked();

private:
    Ui::transferForm *ui;
};

#endif // TRANSFERFORM_H
