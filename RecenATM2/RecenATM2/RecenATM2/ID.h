#pragma once
#include<stdbool.h>
#include<time.h>
#include"User.h"
#include"Formular.h"
class ID
{
public:
	static bool isUnique(int id, list<User*> lUsers);
	static bool isUnique(int id, list<Formular*>lFormulare);
	static void setSrand();
	static int generateRandom();
};

