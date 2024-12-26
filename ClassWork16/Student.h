#pragma once
#include <iostream>
#include "MarkList.h"
#include "Human.h"
#include <vector>
using namespace std;

class Student : protected Human {

	vector<MarkList> arr;
	string login;
	string pass;

	Student();
	string getLogin();
	void addMark(MarkList);
	void popMark();
	string getPass();
	~Student();
};

