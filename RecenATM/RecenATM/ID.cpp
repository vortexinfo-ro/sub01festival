#include "ID.h"
#include<iostream>
#include<time.h>

 
void ID::set_srand()
{
	srand((unsigned int)time(NULL));
}

void ID::set_ID()
{
	int random_number;
	random_number = rand();
	this->Id= random_number;
}

int ID::get_ID()
{
	return Id;
}

ID::~ID()
{
	this->Id = 0;
}
