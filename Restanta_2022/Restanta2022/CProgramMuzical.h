#pragma once
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
#include"CCantec.h"
class CProgramMuzical
{
private:
	vector<CCantec> cantece;
	int durata_totala;
public:
	CProgramMuzical():durata_totala(0){}
	vector<CCantec> stabilire_cantece(CCantec&);
	int get_durata_totala();
	vector<CCantec> return_cantece();
	void afisare_cantece();
	friend istream& operator<<(istream& out, vector<CCantec>& data);
};

