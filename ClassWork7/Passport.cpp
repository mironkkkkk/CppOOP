#include "Passport.h"

Passport::Passport(string ofGived, string fio, int seria, int number, tm* date)
{
	this->date = date;
	this->ofGived = ofGived;
	this->fio = fio;
	this->seria = seria;
	this->number = number;
}

string Passport::getFio()
{
	return fio;
}


Passport::~Passport()
{
}