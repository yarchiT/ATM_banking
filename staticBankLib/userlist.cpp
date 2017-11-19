#include "userlist.h"

void UserList::addUser(User & user){
    UserList::users.push_back(user);
}

