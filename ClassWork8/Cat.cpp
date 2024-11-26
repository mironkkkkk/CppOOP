#include "Cat.h"

Cat::Cat(int mustache, string nickName, string type, string breed, int age):Pet(breed, type, nickName, age)
{
	this->mustache = mustache;
	this->nickName = nickName;
	this->type = type;
	this->breed = breed;
	this->age = age;
}

void Cat::Shout()
{
	cout << "cat is angry.May may may.";
}

void Cat::Show()
{
	cout << "name: " << nickName;
}

void Cat::Type()
{
	cout << "type: " << type;
}

int Cat::getMustache()
{
	return mustache;
}

void Cat::setMustache(int mustache)
{
	this->mustache = mustache;
}

Cat::~Cat()
{
}
