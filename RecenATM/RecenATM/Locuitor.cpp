#include "Locuitor.h"

void Locuitor::set_nume(string nume)
{
	this->nume = nume;
}

string Locuitor::get_nume()
{
	return this->nume;
}
char Locuitor::getType() {
	return 'L';
}