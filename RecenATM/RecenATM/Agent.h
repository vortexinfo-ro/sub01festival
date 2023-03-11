#pragma once
#include "Recenzor.h"
#include"FormularRecenzare.h"
#include"AdeverintaRecenzare.h"
class Agent :public Recenzor
{
private:
	string nume;
	string prenume;
	list<FormularRecenzare> formulare_recenzare;
	list<AdeverintaRecenzare> adeverinte_recenzare;
public:
	Agent() {}
	Agent(string nume, string prenume):nume(nume),prenume(prenume){}
	char getType();
};

