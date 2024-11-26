#include "Dog.h"


Dog::Dog(bool wetOfNose, string name, string type, string breed, int age): Pet(name, type, breed, age)
{
	this->age = age;
	this->wetOfNose = wetOfNose;
	this->nickName = name;
	this->breed = breed;
	this->type = type;
}

void Dog::Shout()
{
	cout << "doge is angry.Gav gav gav." << endl;
}

void Dog::Show()
{
	cout << "name: " << nickName;
}

void Dog::Type()
{
	cout << "type: " << type;
}

bool Dog::getWetOfNose()
{
	return wetOfNose;
}

void Dog::setWetOfNose(bool wetOfNose)
{
	this->wetOfNose = wetOfNose;
}

Dog::~Dog()
{
	cout << "~Dog";
}
