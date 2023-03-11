#pragma once
#include "Recenzor.h"
//#include"FormularRecenzare.h"
//#include"AdeverintaRecenzare.h"
class Agent :public Recenzor
{
private:
	//list<FormularRecenzare> formulare_recenzare;
	//list<AdeverintaRecenzare> adeverinte_recenzare;
public:
	using Recenzor::Recenzor;
	char getType();
};

