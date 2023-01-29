#pragma once
#include<iostream>
#include<string.h>
#include<vector>
#include"IInstrument.h"
#include "CFormatie.h"
#define MAXSIZE 2
class CFormatieMClasica :public CFormatie
{
private:
	vector<IInstrument> instrumente;
public:
	CFormatieMClasica() :CFormatie() {}

};

