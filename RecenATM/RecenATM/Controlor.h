#pragma once
#include "Recenzor.h"
#include"FormularCentralizator.h"
#include"AdeverintaRaport.h"
class Controlor :public Recenzor
{
private:
	string nume;
	string prenume;
	list<FormularCentralizator> lista_centralizatoare;
	list<AdeverintaRaport> lista_rapoarte;
public:
	Controlor();
	Controlor(string nume, string prenume) :nume(nume), prenume(prenume) {}
};

