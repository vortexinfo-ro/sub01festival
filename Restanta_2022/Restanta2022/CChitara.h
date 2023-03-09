#pragma once
#include "IInstrument.h"
class CChitara :public IInstrument
{
private:
	int numar_corzi;
public:
	CChitara(int numrar_corzi):numar_corzi(numar_corzi){}
	virtual void emite_sunet() override;
};

