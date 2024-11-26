#include "Popugai.h"

Popugai::Popugai(string nickName, string type, string breed, string feather, int age):Pet(nickName, type, breed, age)
{
	this->nickName = nickName;
	this->type = type;
	this->breed = breed;
	this->feather = feather;
	this->age = age;
}

void Popugai::Show()
{
	cout << "name: " << nickName;
}

void Popugai::Shout()
{
	cout << "popugai is angry. kykareky, kykareky, kykareky.";
}

void Popugai::Type()
{
	cout << "type: " << type;
}

string Popugai::getFeather()
{
	return feather;
}

void Popugai::setFeather(string)
{
	this->feather = feather;
}

Popugai::~Popugai()
{
}
