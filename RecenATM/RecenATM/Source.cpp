#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include"RecenApp.h"
#include"ID.h"
#include"Recenzor.h"
#include"Controlor.h"
using namespace std;
int main()
{
	/*ID *id=new ID();
	id->set_ID();
	cout<<id->get_ID();
	delete id;
	cout << endl;
	ID* id1 = new ID();
	id1->set_ID();
	cout << id1->get_ID();
	delete id1;*/              //de ce aceleasi numere?

	Recenzor r;
	//Recenzor r1;

	/*Recenzor r1;
	r1.set_id();
	cout << r1.get_id();*/

	RecenApp::getInstance().return_list_utilizatori().push_back(r);

	Controlor c("a","b"); //////////////

	return 0;
}