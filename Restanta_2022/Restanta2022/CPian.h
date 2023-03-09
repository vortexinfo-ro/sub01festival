#pragma once
#include "IInstrument.h"
class CPian : public IInstrument
{
private:
	int greutate;
	int numar_clape;
public:
	CPian(int greutate, int numar_clape) :greutate(greutate), numar_clape(numar_clape) {}
	virtual void emite_sunet() override;


};

