#include "user.h"

User::User(QString& _phone,QString & _password,QString & _email,QString & _name,QString & _lastName):
    account_id(++User::free_id),
    password(_password),
    phone(_phone),
    email(_email),
    name(_name),
    lastName(_lastName)
{};

User& User::operator=(const User& user)
{
  //to do
}
