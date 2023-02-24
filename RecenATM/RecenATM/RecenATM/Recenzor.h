#pragma once
#include "IUtilizator.h"
#include"ID.h"
using namespace std;
class Recenzor :public IUtilizator
{
private:
	ID id;
public:
	Recenzor()
	{
		id.set_ID();
		cout << id.get_ID()<<endl;
	}
};

