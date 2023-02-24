#pragma once
#include<iostream>
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
	list<IUtilizator> return_list_utilizatori();
};

