#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
#include"Agent.h"
#include"Locuitor.h"
#include"ID.h"
#include"Controlor.h"
#include"IUtilizator.h"
#include<list>
#include<vector>
using namespace std;
class RecenApp
{
private:
	RecenApp() {}
public:
	static RecenApp& getInstance();

	list<IUtilizator> Users;
	vector<int>	IDs;
	vector<char> usersInitials;
	
	void run();
	//dd
	void initUsers();
	void initUsersIDs();
	void initUsersInitials(char i);
	size_t IDsSize();
	bool isIdUnique(int value);
	size_t addUser(IUtilizator &u);
	list<IUtilizator> getUsersList();
};

