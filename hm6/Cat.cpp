#include "Cat.h"

Cat::Cat(int mustache, string name, int age, string type) : Pet(name, age, type)
{
	this->type = type;
	this->age = age;
	this->name = name;
	this->mustache = mustache;
}

void Cat::sound()
{
	cout << "Meow";
}

void Cat::goTo()
{
	cout << "Cat is running";
}

void Cat::print()
{
	cout << "name: " << name << endl;
	cout << "type: " << type << endl;
	cout << "age: " << age << endl;
	cout << "mustache: " << mustache << endl;
}

Cat::~Cat()
{
}
