#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QString>
#include "userlist.h"
using namespace std;

class Authorization
{

public:
     User *login(const QString&,const QString&);
     void logout();
     void resetPassword();
};

#endif // AUTHORIZATION_H
