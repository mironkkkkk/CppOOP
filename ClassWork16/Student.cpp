#include "Student.h"

string Student::getLogin()
{
	return login;
}

void Student::addMark(MarkList mark)
{
	arr.push_back(mark);
}

void Student::popMark()
{
	arr.pop_back();
}

string Student::getPass()
{
	return pass;
}

Student::~Student()
{
}
