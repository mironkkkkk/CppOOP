#pragma once
#include <iostream>
#include "Teacher.h"
#include <vector>
using namespace std;

class Academy{
	vector<Teacher*> teacher;
	Group* group;

	Academy();
	~Academy();
};

