#pragma once
#include <iostream>
#include <string>
using namespace std;

class Fio
{
private:
	string name;
	string lastname;
	string fathername;

public:
	Fio();
	Fio(string, string);
	Fio(string, string, string);
	string getName();
	string getLastname();
	string getFathername();

	void setName(string);
	void setLastname(string);
	void setFathername(string);
	void showFio();
	~Fio();

};

