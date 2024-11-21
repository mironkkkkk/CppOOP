#pragma once
#define stringi string
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class Aspirant: public Student
{
private:
	stringi nameTheme;
	int grate;
public:
	Aspirant(stringi, stringi, stringi, int, int);
	stringi getNameTheme();
	void setNameTheme(stringi);
	int getGrate();
	void setGrate(int);
	void showAsp();

	~Aspirant();
};

