#include "Fio.h"

Fio::Fio()
{
}

Fio::Fio(string name, string lastname)
{
	this->name = name;
	this->lastname = lastname;
	this->fathername = "none";
}

Fio::Fio(string name, string lastname, string fathername)
{
	this->name = name;
	this->lastname = lastname;
	this->fathername = fathername;
}

string Fio::getName()
{
	return name;
}

string Fio::getLastname()
{
	return lastname;
}

string Fio::getFathername()
{
	return fathername;
}

void Fio::setName(string name)
{
	this->name = name;
}

void Fio::setLastname(string lastname)
{
	this->lastname = lastname;
}

void Fio::setFathername(string fathername)
{
	this->fathername = fathername;
}

void Fio::showFio()
{
	cout << "name: " << name << " lastname: " << lastname << " fathername: " << fathername;
}

Fio::~Fio()
{

}
