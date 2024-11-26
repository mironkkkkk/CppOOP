#pragma once
#include <iostream>
#include "Pet.h"
using namespace std;

class Dog: public Pet
{
private:
	bool wetOfNose;

public:
	Dog(bool, string, string, string, int);
	void Shout();
	void Show();
	void Type();

	bool getWetOfNose();
	void setWetOfNose(bool);
	~Dog();
};

