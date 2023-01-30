#pragma once
#include "IInstrument.h"
class CTrompeta :public IInstrument
{
private:
	string denumirea_producatorului;
public:
	CTrompeta(string denumirea_producatorului):denumirea_producatorului(denumirea_producatorului){}
	virtual void emite_sunet() override;
};

