#include "authorization.h"

User *Authorization::login(const QString& phone,const QString & password){
     for (vector<User>::iterator it = UserList::users.begin() ; it != UserList::users.end(); ++it)
        if(it->getPhone() == phone && it->getPassword() == password )
            return &*it;
     return 0;
}

void Authorization::logout(){
    return;
}

void Authorization::resetPassword(){
    return;
}
