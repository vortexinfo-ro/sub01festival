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
	//initializare_utilizatori();
	initUsers();
}

//dd
void RecenApp::initUsers()
{
	cout << "Entry initUsers" << endl;
	ifstream myFile;

	string nume;
	string prenume;
	string sId;
	string tip;
	IUtilizator* user = nullptr;
	int i = 0;
	size_t size = 0;

	cout << "user: " << user << " user adr: " << &user << endl;

	myFile.open("users.csv");
	if (myFile.good()) {
		cout << "file found" << endl;
	}else {
		cout << "file not found" << endl;
	}
	while (myFile.good())
	{
		getline(myFile, sId, ';');
		getline(myFile, nume, ';');
		getline(myFile, prenume, ';');
		getline(myFile, tip);

		

		if (i++ == 0) continue;
		cout << "id: " << sId << " nume: " << nume << " prenume: " << prenume << " tip: " << tip << endl;
		switch (tip[0]) {
			case 'A':
				user = new Agent(nume, prenume);
				size = RecenApp::addUser(*user);
				cout << "Agent size: " << size << endl;
				break;
			case 'C':
				user = new Controlor(nume, prenume);
				size = RecenApp::addUser(*user);
				cout << "Controlor size: " << size << endl;
				break;
			case 'L':
				user = new Locuitor(nume, prenume);
				size = RecenApp::addUser(*user);
				cout << "Locuitor size: " << size << endl;
				break;
			default:
				cout << "bad type: " << tip << endl;
		}
		
	}
	myFile.close();

}
list<IUtilizator> RecenApp::getUsersList()
{
	return Utilizator;
}
size_t RecenApp::addUser(IUtilizator &u)
{
	cout << "Entry addUser()" << endl;
	Utilizator.push_back(u);
	return Utilizator.size();
}