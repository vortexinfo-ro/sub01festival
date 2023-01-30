#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class CCantec
{
private:
	string denumire;
	int durata;
public:
	CCantec() { this->denumire = " ", this->durata = 0; }
	CCantec(string denumire, int durata):denumire(denumire),durata(durata){}
	
	int get_durata();
	int set_durata(int durata_noua);
};

