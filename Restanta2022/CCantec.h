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
	int get_durata();
	int set_durata(int durata_noua);
};

