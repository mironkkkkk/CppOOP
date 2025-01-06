#include "Pet.h"

Pet::Pet(string name, int age, string type)
{
	this->name = name;
	this->age = age;
	this->type = type;
}

string Pet::getName()
{
	return name;
}

int Pet::getAge()
{
	return age;
}

string Pet::getType()
{
	return type;
}

void Pet::sound()
{
}

void Pet::goTo()
{
}

void Pet::print()
{
}
	
Pet::~Pet()
{
}
