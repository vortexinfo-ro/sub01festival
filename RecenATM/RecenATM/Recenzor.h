#pragma once
#include "IUtilizator.h"
#include"ID.h"
using namespace std;
class Recenzor :public IUtilizator
{
protected:
	ID id;
public:
	Recenzor()
	{
		id.set_ID();
		cout << id.get_ID() << endl;
	}
	ID return_ID();
};

