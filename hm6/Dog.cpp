#include "Dog.h"

Dog::Dog(int bigLanguage, string name, string type, int age) : Pet(name, age, type)
{
	this->type = type;
	this->age = age;
	this->name = name;
	this->bigLanguage = bigLanguage;
}

void Dog::sound()
{
	cout << "Gav";
}

void Dog::goTo()
{
	cout << "Doge is running";
}

void Dog::print()
{
	cout << "name: " << name << endl;
	cout << "type: " << type << endl;
	cout << "age: " << age << endl;
	cout << "language: " << bigLanguage << endl;
}

Dog::~Dog()
{
}
