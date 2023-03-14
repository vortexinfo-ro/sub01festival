#pragma once
#include "Formular.h"
class FormularCentralizator :public Formular
{
private:
	int idControlor;
	int idAgent;
	list<int>lId;
public:
	using Formular::Formular;
};

