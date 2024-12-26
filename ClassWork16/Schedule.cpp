#include "Schedule.h"


void Schedule::addElement(Lesson newLess)
{
	v.push_back(newLess);
}

void Schedule::deleteElement()
{
	v.pop_back();
}

Schedule::~Schedule()
{
}

