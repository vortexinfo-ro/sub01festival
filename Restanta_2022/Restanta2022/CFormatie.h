#pragma once
#include<iostream>
#include<string.h>
#include<vector>
#include"CProgramMuzical.h"
#include"IInstrument.h"
#include"CPian.h"
#include"CChitara.h"
#include"CTrompeta.h"
using namespace std;
class CFormatie
{
private:
	string denumire;
	vector<IInstrument*> instrumente;
	vector<IInstrument*> instrumente1;
	CProgramMuzical* program_muzical_m_clasica;
	//dd
	vector<IInstrument*> instruments;

public:
	CFormatie(); // {}
	void set_denumire(string den);
	string get_denumire();
	vector<IInstrument*> set_instrumente_m_clasica();
	vector<IInstrument*> set_instrumente_m_populara();
	CProgramMuzical* program_muzical();
	//dd
	size_t add_instrument(IInstrument *inst);
	size_t set_instruments();
	vector<IInstrument*> get_instruments();
};

