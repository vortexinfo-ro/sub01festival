#pragma once
#include<vector>
#include"CFormatie.h"
#include"CFormatieMClasica.h"
#include"CFormatieMPopulara.h"
class CApp
{
private:
	CApp(){}
	//static CApp* instance;
public:
	static CApp& getInstance();
	vector<CFormatie> formatii;
	void run();

};

