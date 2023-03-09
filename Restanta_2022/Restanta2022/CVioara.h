#pragma once
#include "IInstrument.h"
class CVioara :public IInstrument
{
private:
	int anul_productiei;
public:
	CVioara(int anul_productiei):anul_productiei(anul_productiei){}
	virtual void emite_sunet() override;
};

