#include "Parrot.h"

Parrot::Parrot(int feathers, string name, string type, int age) : Pet(name, age, type)
{
	this->type = type;
	this->age = age;
	this->name = name;
	this->feathers = feathers;
}

void Parrot::sound()
{
	cout << "rumbles";
}

void Parrot::goTo()
{
	cout << "Parrot is flying";
}

void Parrot::print()
{
	cout << "name: " << name << endl;
	cout << "type: " << type << endl;
	cout << "age: " << age << endl;
	cout << "feathers: " << feathers << endl;
}

Parrot::~Parrot()
{
}
