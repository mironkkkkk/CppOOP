#include "Human.h"

Human::Human(int num, string fam, string name, string otch, int date)
{
	this->number = num;
	this->date = date;
	this->fam = fam;
	this->name = name;
	this->otchestvo = otch;

	num++;
}

void Human::Show()
{
	cout << "number; " << number << " date: " << date << " fam: " << fam << " name: " << name << " otchescvo: " << otchestvo << endl;
}

int Human::getNumber()
{
	return number;
}

void Human::setNumber(int number)
{
	this->number = number;
}

string Human::getFam()
{
	return fam;
}

void Human::setFam(string fam)
{
	this->fam = fam;
}

string Human::getName()
{
	return name;
}

void Human::setName(string name)
{
	this->name = name;
}

string Human::getOtch()
{
	return otchestvo;
}

void Human::setOtch(string otch)
{
	this->otchestvo = otch;
}

int Human::getDate()
{
	return date;
}

void Human::setDate(int date)
{
	this->date = date;
}

void Human::copyHuman(Human& people)
{
	this->date = people.date;
	this->fam = people.fam;
	this->name = people.name;
	this->number = people.num;
	this->otchestvo = people.otchestvo;
}

Human::~Human()
{
}
