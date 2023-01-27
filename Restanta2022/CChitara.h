#pragma once
#include "IInstrument.h"
class CChitara :public IInstrument
{
private:
	int numar_corzi;
public:
	virtual void emite_sunet() override;
};

