#pragma once
#include<iostream>
#include<list>
using namespace std;
class Formular
{
private:
	int id;
	int idAgent;
public:
	Formular(int id);
	void setId(int id);
	void setIdAgent(int id);
	int getId();
	//virtual void show();
};

