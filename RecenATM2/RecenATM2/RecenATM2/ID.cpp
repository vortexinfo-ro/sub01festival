#include "ID.h"

bool ID::isUnique(int id, list<User*> lUsers)
{
    for(auto pUser:lUsers)
    {
        int userId = pUser->getId();
        if (id == userId) return false;
        pUser++;
    }
    return true;
}

bool ID::isUnique(int id, list<Formular*> lFormulare)
{
    for (auto pFormular : lFormulare)
    {
        int formularId = pFormular->getId();
        if (id == formularId) return false;
    }
    return true;
}

void ID::setSrand()
{
    srand((unsigned int)time(NULL));
}

int ID::generateRandom()
{
    int randomNumber;
    randomNumber = rand();
    return randomNumber;
}
