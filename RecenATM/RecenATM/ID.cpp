#include "ID.h"
#include<iostream>
#include<time.h>

int ID::Id = 0;

void ID::set_ID()
{
	srand(time(NULL));
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
