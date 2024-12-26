#pragma once
#include <iostream>
#include "Group.h"
#include "Teacher.h"
#include "Time.h"
using namespace std;


class Lesson {
	
	Group* group;
	Teacher* teacher;
	string subject;
	Time time;

	Lesson();
	string getSubject();
	~Lesson();
};
