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
	int get_durata_totala();
public:
	CProgramMuzical(){}
	friend istream& operator>>(istream& out, CProgramMuzical& data);
};

