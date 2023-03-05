#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include"RecenApp.h"
#include"ID.h"
#include"Recenzor.h"
#include"Controlor.h"
using namespace std;
int main()
{
	RecenApp::getInstance().run();
	return 0;
}