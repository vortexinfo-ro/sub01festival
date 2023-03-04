#include "RecenApp.h"

RecenApp& RecenApp::getInstance()
{
	static RecenApp instance;
	return instance;
}

list<IUtilizator> RecenApp::return_list_utilizatori(IUtilizator u)
{
	Utilizator.push_back(u);
	return Utilizator;
}
void RecenApp::initializare_utilizatori()
{
	string nume;
	string prenume;
	ifstream myFile;
	myFile.open("locuitori.csv");
	while (myFile.good())
	{
		getline(myFile, nume, ',');
		getline(myFile, prenume, ',');
		Locuitor L1(nume, prenume);
		RecenApp::return_list_utilizatori(L1);
		getline(myFile, nume, ',');
		getline(myFile, prenume, ',');
		Locuitor L2(nume, prenume);
		RecenApp::return_list_utilizatori(L2);
	}
	myFile.close();
	myFile.open("agenti.csv");
	while (myFile.good())
	{
		getline(myFile, nume, ',');
		getline(myFile, prenume, ',');
		Agent A1(nume, prenume);
		RecenApp::return_list_utilizatori(A1);
		getline(myFile, nume, ',');
		getline(myFile, prenume, ',');
		Agent A2(nume, prenume);
		RecenApp::return_list_utilizatori(A2);
	}
	myFile.close();
	myFile.open("controlori.csv");
	while (myFile.good())
	{
		getline(myFile, nume, ',');
		getline(myFile, prenume, ',');
		Controlor C1(nume, prenume);
		RecenApp::return_list_utilizatori(C1);
		getline(myFile, nume, ',');
		getline(myFile, prenume, ',');
		Controlor C2(nume, prenume);
		RecenApp::return_list_utilizatori(C2);
	}
	myFile.close();
}

void RecenApp::run()
{
	initializare_utilizatori();
	
}
