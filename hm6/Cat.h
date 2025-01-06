#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

class Cat : public Pet
{
private:
	int mustache;
public:
	Cat(int mustache, string name, int age, string type);
	void sound();
	void goTo();
	void print();
	~Cat();
};

