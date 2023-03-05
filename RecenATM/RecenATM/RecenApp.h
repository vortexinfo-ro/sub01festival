#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
#include"Agent.h"
#include"Locuitor.h"
#include"Controlor.h"
#include"IUtilizator.h"
#include<list>
using namespace std;
class RecenApp
{
private:
	RecenApp() {}
public:
	static RecenApp& getInstance();
	list<IUtilizator> Utilizator;
	list<IUtilizator> return_list_utilizatori(IUtilizator u);
	void initializare_utilizatori();
	void run();
};

