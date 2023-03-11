#pragma once
#include<iostream>
#include<string.h>
#include<list>
//#include"FormularRecenzare.h"
#include "User.h"
using namespace std;
class Locuitor :public User
{
private:
	//string nume;
	//string prenume;
	//list<FormularRecenzare> formulare_recenzare;
public:
	using User::User;
	//Locuitor() {}
	//Locuitor(string nume, string prenume) :nume(nume), prenume(prenume) {};
	
   
	char getType();
};

