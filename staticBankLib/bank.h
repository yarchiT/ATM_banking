#ifndef BANK_H
#define BANK_H


class Bank
{
public:
    Bank();
    void generateId();
private:
    static int counter = 0;

};

#endif // BANK_H
