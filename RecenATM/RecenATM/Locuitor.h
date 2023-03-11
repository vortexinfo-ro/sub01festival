#pragma once
#include<iostream>
#include<string.h>
#include<list>
#include"FormularRecenzare.h"
#include "IUtilizator.h"
using namespace std;
class Locuitor :public IUtilizator
{
private:
	string nume;
	string prenume;
	list<FormularRecenzare> formulare_recenzare;
public:
	Locuitor() {}
	Locuitor(string nume, string prenume) :nume(nume), prenume(prenume) {};
	void set_nume(string nume);
	string get_nume();
   
	char getType();
};

