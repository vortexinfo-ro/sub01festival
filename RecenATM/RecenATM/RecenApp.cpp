#include "RecenApp.h"

RecenApp& RecenApp::getInstance()
{
	static RecenApp instance;
	return instance;
}

void RecenApp::run()
{
	initUsers();
}
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
				RecenApp::initUsersIDs();
				RecenApp::initUsersInitials('A');
				cout << "Users size: " << size<<"; IDs size: "<<RecenApp::IDsSize() << endl;
				break;
			case 'C':
				user = new Controlor(nume, prenume);
				size = RecenApp::addUser(*user);
				RecenApp::initUsersIDs();
				RecenApp::initUsersInitials('C');
				cout << "Users size: " << size << "; IDs size: " << RecenApp::IDsSize() << endl;
				break;
			case 'L':
				user = new Locuitor(nume, prenume);
				size = RecenApp::addUser(*user);
				RecenApp::initUsersIDs();
				RecenApp::initUsersInitials('L');
				cout << "Users size: " << size << "; IDs size: " << RecenApp::IDsSize() << endl;
				break;
			default:
				cout << "bad type: " << tip << endl;
		}
		
	}
	myFile.close();

}
void RecenApp::initUsersIDs()
{
	cout << "Init Users IDs: ";
	ID id;
	//id.set_ID();
	do
	{
		id.set_ID();                                    
	} while (isIdUnique(id.get_ID()) == false);          
	IDs.push_back(id.get_ID());
	cout << id.get_ID()<<" "<<endl;
}
void RecenApp::initUsersInitials(char i)
{
	usersInitials.push_back(i);
}
size_t RecenApp::IDsSize()
{
	return IDs.size();
}
bool RecenApp::isIdUnique(int value)
{
	for(int i=0;i<IDs.size();i++)
		if(IDs[i]==value)
			return false;             //verifica daca id ul se mai gaseste undeva in vector
	return true;
}
list<IUtilizator> RecenApp::getUsersList()
{
	return Users;
}
size_t RecenApp::addUser(IUtilizator &u)
{
	cout << "Entry addUser()" << endl;
	Users.push_back(u);
	return Users.size();
}