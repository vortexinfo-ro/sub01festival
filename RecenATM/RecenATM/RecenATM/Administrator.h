#pragma once
#include "IUtilizator.h"
class Administrator :public IUtilizator //unic
{
private:
	Administrator();
public:
	static Administrator& getInstance();
};

