#include "Student.h"

Student::Student(stringi fio, stringi subject, int numberGroup, int numberCourse)
{
	this->fio = fio;
	this->subject = subject;
	this->numberCourse = numberCourse;
	this->numberGroup = numberGroup;
}

stringi Student::getFio()
{
	return fio;
}

void Student::setFio(stringi fio)
{
	this->fio = fio;
}

stringi Student::getSubject()
{
	return subject;
}

void Student::setSublect(stringi subject)
{
	this->subject = subject;
}

int Student::getNumberGroup()
{
	return numberGroup;
}

void Student::setNumberGroup(int number)
{
	this->numberGroup = number;
}

int Student::getNumberCourse()
{
	return numberCourse;
}

void Student::getNumberCourse(int number)
{
	this->numberCourse = number;
}

void Student::showStudent()
{
	cout << "name: " << fio << " subject: " << subject << " number group: " << numberGroup << " number course: " << numberCourse;
}

Student::~Student()
{
}
