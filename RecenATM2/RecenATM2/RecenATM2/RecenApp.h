#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
#include<list>
#include<vector>

#include "User.h"
#include "Agent.h"
#include"Controlor.h"
#include"Locuitor.h"
#include"ID.h"
#include"Formular.h"
#include"FormularRecenzare.h"
#include"FormularCentralizator.h"
using namespace std;
class RecenApp
{
private:
	RecenApp() {}
public:
	static RecenApp& getInstance();

	list<User*> lUsers;
	list<Formular*> lFormulare;
	
	void run();
	//dd
	void initUsers();
	//bool isIdUnique(int value);
	size_t addUser(User &u);

	void initFormulare(list<User*> lUsers,list<Formular*>lFormulare);
	size_t addFormular(Formular &f);

};

