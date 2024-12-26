#pragma once
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;


class Group{

private:
	string name;
	string facult;
	Student* arr;

	Group();
	string getName();
	string getFacult();
	~Group();


};

