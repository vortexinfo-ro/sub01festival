#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"IInstrument.h"
#include"CPian.h"
#include"CChitara.h"
#include"CTrompeta.h"
#include"CVioara.h"
using namespace std;

int main()
{
	CVioara vioara;
	vioara.emite_sunet();
	CChitara chitara;
	chitara.emite_sunet();
	CPian pian;
	pian.emite_sunet();
	CTrompeta trompeta;
	trompeta.emite_sunet();
	return 0;
}