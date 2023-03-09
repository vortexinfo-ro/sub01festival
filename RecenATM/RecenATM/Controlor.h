#pragma once
#include "Recenzor.h"
#include"FormularCentralizator.h"
#include"AdeverintaRaport.h"
class Controlor :public Recenzor
{
private:
	string nume;
	string prenume;
	list<FormularCentralizator> listCentralizatoare;
	list<AdeverintaRaport> listRpoarte;
	list<IUtilizator> listAgenti;
public:
	Controlor() {}
	Controlor(string nume, string prenume) :nume(nume), prenume(prenume) { }
};

