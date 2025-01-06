#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

class Parrot : Pet
{
private:
	int feathers;
public:
	Parrot(int feathers, string name, string type, int age);
	void sound();
	void goTo();
	void print();
	~Parrot();
};

