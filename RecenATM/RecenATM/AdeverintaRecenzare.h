#pragma once
#include "Adeverinta.h"
class AdeverintaRecenzare :public Adeverinta
{
private:
	string nume_locuitor;
	int ID_agent;
	int ID_formular_recenzare;
public:
	AdeverintaRecenzare();
};

