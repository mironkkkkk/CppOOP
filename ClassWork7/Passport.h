#pragma once
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Passport
{
protected:
	string fio;
	string ofGived;
	int number;
	int seria;
	struct tm* date;
public:
	Passport(string, string, int, int, tm* date);
	string getFio();
	~Passport();
};

