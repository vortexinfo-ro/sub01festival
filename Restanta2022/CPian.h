#pragma once
#include "IInstrument.h"
class CPian : public IInstrument
{
private:
	int greutate;
	int numar_clape;
public:
	virtual void emite_sunet() override;


};

