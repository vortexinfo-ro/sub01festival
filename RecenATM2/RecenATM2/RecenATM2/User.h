#pragma once
#include<iostream>
#include<string.h>
#include<list>
using namespace std;
class User
{
private:
	

protected:
	int id;
	string nume, prenume;
public:
	User(string, string);
	void setId(int id);
	int getId();
	virtual char getType();
	void setNume(string nume);
	string getNume();
	string getPrenume();
};

