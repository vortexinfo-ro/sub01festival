#include "RecenApp.h"

RecenApp& RecenApp::getInstance()
{
	static RecenApp instance;
	return instance;
}

void RecenApp::run()
{
	initUsers();
	ID::setSrand();
	initFormulare(lUsers,lFormulare);
	//cout << "3" << (ID::isUnique(3, lUsers) ? "unique" : "duplicate") << endl;
}
void RecenApp::initUsers()
{
	cout << "Entry initUsers" << endl;
	ifstream myFile;

	string nume;
	string prenume;
	string sId;
	string tip;

	int rNumber;
	
	User* user = nullptr;
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
		//cout << "id: " << sId << " nume: " << nume << " prenume: " << prenume << " tip: " << tip << endl;
		do
		{
			rNumber = ID::generateRandom();
		} while (ID::isUnique(rNumber, lUsers) == false);
		//cout << rNumber << endl;
		switch (tip[0]) {
			case 'A':
				user = new Agent(nume, prenume); // add user to lUsers list
				size = RecenApp::addUser(*user);
				user->setId(rNumber);
				cout << "Users size: " << size<<endl;
				break;
			case 'C':
				user = new Controlor(nume, prenume);
				size = RecenApp::addUser(*user);
				user->setId(rNumber);
				cout << "Users size: " << size<< endl;
				break;
			case 'L':
				user = new Locuitor(nume, prenume);
				size = RecenApp::addUser(*user);
				user->setId(rNumber);
				cout << "Users size: " << size<< endl;
				break;
			default:
				cout << "bad type: " << tip << endl;
		}
		cout << "id: " <<user->getId() << " nume: " << nume << " prenume: " << prenume << " tip: " << tip << endl;	
	}
	
	myFile.close();
	for (auto pUser : lUsers) {
		cout << pUser->getType() << " : " << typeid(*pUser).name() << " : " << pUser->getNume() <<" "<<pUser->getPrenume() << endl;
	}
	
}
size_t RecenApp::addUser(User &u)
{
	cout << "Entry addUser()" << endl;
	lUsers.push_back(&u);
	return lUsers.size();
}

void RecenApp::initFormulare(list<User*> lUsers, list<Formular*> lFormulare)
{
	int size = 0;
	Formular* pFormular = nullptr;
	int rNuberF;
	for (auto pUser : lUsers)
	{
		if (pUser->getType() == 'A')
		{
			do
			{
				rNuberF = ID::generateRandom();
			} while (ID::isUnique(rNuberF, lFormulare) == false);
			pFormular = new FormularRecenzare(rNuberF);
			size = RecenApp::addFormular(*pFormular);
			cout << "Formulare size: " << size <<". Id: "<<pFormular->getId() << endl;
		}
		if (pUser->getType() == 'C')
		{
			do
			{
				rNuberF = ID::generateRandom();
			} while (ID::isUnique(rNuberF, lFormulare) == false);
			pFormular = new FormularCentralizator(rNuberF);
			size = RecenApp::addFormular(*pFormular);
			cout << "Formulare size: " << size << ". Id: " << pFormular->getId() << endl;
		}
	}
}

size_t RecenApp::addFormular(Formular &f)
{
	cout << "addFormular()" << endl;
	lFormulare.push_back(&f);
	return lFormulare.size();
}
