#ifndef USERLIST_H
#define USERLIST_H
#include <vector>

#include "user.h"

class UserList
{

public:
    static vector<User> users;
    static void addUser(User &);
};


inline vector<User> UserList::users;

#endif // USERLIST_H
