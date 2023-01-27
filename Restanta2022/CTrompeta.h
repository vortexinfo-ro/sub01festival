#pragma once
#include "IInstrument.h"
class CTrompeta :public IInstrument
{
private:
	string denumirea_producatorului;
public:
	virtual void emite_sunet() override;
};

