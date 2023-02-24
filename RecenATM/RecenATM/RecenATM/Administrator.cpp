#include "Administrator.h"

Administrator& Administrator::getInstance()
{
    static Administrator instance;
    return instance;
}
