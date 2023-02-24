#include "RecenApp.h"

RecenApp& RecenApp::getInstance()
{
	static RecenApp instance;
	return instance;
}

list<IUtilizator> RecenApp::return_list_utilizatori()
{
	return Utilizator;
}
