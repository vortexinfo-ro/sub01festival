#pragma once
#include<iostream>
#include<string.h>
#include<vector>
#include"IInstrument.h"
#include"CProgramMuzical.h"
using namespace std;
class CFormatie
{
private:
	string denumire;
	vector<IInstrument> instrumente;
	CProgramMuzical program_muzical;
public:
};

