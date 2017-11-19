#ifndef USER_H
#define USER_H

#include <iostream>
#include <QString>
using namespace std;

class User
{
private :
    static int free_id;
    const int account_id;
    QString password;
    QString phone;
    QString email;
    QString name;
    QString lastName;
public:
    User(QString &, QString &,QString &, QString &,QString &);
    User& operator=(const User& user);

    QString &getPhone(){ return phone; }
    const QString &getPhone() const{ return phone; }

    QString &getEmail(){ return email; }
    const QString &getEmail() const { return email; }

    QString &getPassword(){ return password; }
    const QString &getPassword() const { return password; }

    QString &getName(){ return name; }
    const QString &getName() const { return name; }

    QString &getLastName(){ return lastName; }
    const QString &getLastName() const { return lastName; }
};

static unsigned int free_id = 0;

#endif // USER_H
