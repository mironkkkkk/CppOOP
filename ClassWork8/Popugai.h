#pragma once
#include <iostream>
#include "Pet.h"
using namespace std;


class Popugai:public Pet
{
private:
	string feather;
public:
	Popugai(string, string, string, string, int);
	void Show();
	void Shout();
	void Type();

	string getFeather();
	void setFeather(string);
	~Popugai();
};

