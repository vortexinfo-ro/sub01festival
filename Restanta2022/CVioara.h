#pragma once
#include "IInstrument.h"
class CVioara :public IInstrument
{
private:
	int anul_productiei;
public:
	virtual void emite_sunet() override;
};

