#pragma once
#include "Formular.h"
#include"FormularRecenzare.h"
class FormularCentralizator :public Formular
{
private:
	int ID_controlor;
	int ID_agent;
	list<FormularRecenzare> lista_formulare_recenzare;

public:
	FormularCentralizator();
};

