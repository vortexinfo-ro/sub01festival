#include "ID.h"

bool ID::isUnique(int id, list<User*> lUsers)
{
    for (auto pUser : lUsers) {
        int userId = pUser->getId();
        if (id == userId)
            return false;
    }
    return true;
}
