#pragma once
#include<iostream>
#include<string.h>
#include<list>

#include "User.h"

using namespace std;
class Recenzor :public User
{
protected:
public:
	using User::User; // use constructor from parent class
	char getType();
};

