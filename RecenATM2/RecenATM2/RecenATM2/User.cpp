#include "User.h"

User::User(string nume, string prenume) // :nume(nume), prenume(prenume) {}
{
	this->nume = nume;
	this->prenume = prenume;
}
/* */

void User::setId(int id){
	this->id = id;
}

int User::getId(){
	return this->id;
}

char User::getType()
{
	return 0;
}
void User::setNume(string nume)
{
	this->nume = nume;
}

string User::getNume()
{
	return this->nume;
}