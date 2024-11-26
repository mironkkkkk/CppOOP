#include "Pet.h"

Pet::Pet(string NickName, string type, string breed, int age)
{
	this->age = age;
	this->nickName = nickName;
	this->breed = breed;
	this->type = type;
}

string Pet::getNickName()
{
	return nickName;
}

void Pet::setNickName(string nickName)
{
	this->nickName = nickName;
}

string Pet::getType()
{
	return type;
}

void Pet::setType(string type)
{
	this->type = type;
}

string Pet::getBreed()
{
	return breed;
}

void Pet::setBreed(string breed)
{
	this->breed = breed;
}

int Pet::getAge()
{
	return age;
}

void Pet::setAge(int age)
{
	this->age = age;
}

Pet::~Pet()
{
}
