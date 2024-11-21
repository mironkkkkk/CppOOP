#include "Aspirant.h"

Aspirant::Aspirant(stringi nameTheme, stringi fio, stringi subject, int numberGroup, int numberCourse):Student(fio, subject, numberGroup, numberCourse)
{
	this->nameTheme = nameTheme;
}

stringi Aspirant::getNameTheme()
{
	return nameTheme;
}

void Aspirant::setNameTheme(stringi nameTheme)
{
	this->nameTheme = nameTheme;
}

int Aspirant::getGrate()
{
	return grate;
}

void Aspirant::setGrate(int grate)
{
	this->grate = grate;
}

void Aspirant::showAsp()
{
	showStudent();
	cout << " name theme:" << nameTheme << " grate: " << grate;
}

Aspirant::~Aspirant()
{
}
