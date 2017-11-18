#ifndef ADDCARDFORM_H
#define ADDCARDFORM_H

#include <QWidget>

namespace Ui {
class AddCardForm;
}

class AddCardForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddCardForm(QWidget *parent = 0);
    ~AddCardForm();

private:
    Ui::AddCardForm *ui;
};

#endif // ADDCARDFORM_H
