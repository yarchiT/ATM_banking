#ifndef ADDCARDFORM_H
#define ADDCARDFORM_H

#include <QWidget>
#include <QStackedWidget>

namespace Ui {
class AddCardForm;
}

class AddCardForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddCardForm(QWidget *parent = 0);
    ~AddCardForm();

private slots:
    void on_goBack_clicked();

    void on_pushButton_2_clicked();

    void on_AddUser_clicked();

    void on_AddCard_clicked();

private:
    Ui::AddCardForm *ui;
};

#endif // ADDCARDFORM_H
