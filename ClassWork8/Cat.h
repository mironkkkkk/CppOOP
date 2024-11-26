#pragma once
#include <iostream>
#include "Pet.h"
using namespace std;

class Cat:public Pet
{
private:
	int mustache;
public:
	Cat(int, string, string, string, int);
	void Shout();
	void Show();
	void Type();

	int getMustache();
	void setMustache(int);
	~Cat();
};

