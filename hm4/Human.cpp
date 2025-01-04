#include "Human.h"

Human::Human(string fio, int age)
{
	this->age = age;
	this->fio = fio;
}

string Human::getFio()
{
	return this->fio;
}

int Human::getAge()
{
	return this->age;
}

void Human::setFio(string fio)
{
	this->fio = fio;
}

void Human::setAge(int age)
{
	this->age = age;
}

void Human::print()
{
	cout << "name: " << this->fio;
	cout << endl;
	cout << "age: " << this->age;
	cout << endl;
}

void Human::operator=(Human& human)
{
	this->age = human.age;
	this->fio = human.fio;
}

Human::~Human()
{
}
