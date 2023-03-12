#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
#include<list>
#include<vector>

#include "User.h"
#include "Agent.h"
#include"Controlor.h"
#include"Locuitor.h"
#include"ID.h"
/*
#include"ID.h"
#include"IUtilizator.h"
*/

using namespace std;
class RecenApp
{
private:
	RecenApp() {}
public:
	static RecenApp& getInstance();

	list<User*> lUsers;
	//list<IUtilizator> Users;
	//vector<int>	IDs;
	//vector<char> usersInitials;
	
	void run();
	//dd
	void initUsers();
	void initUsersIDs();
	void initUsersInitials(char i);
	size_t IDsSize();
	bool isIdUnique(int value);
	size_t addUser(User &u);
	//list<IUtilizator> getUsersList();
};

