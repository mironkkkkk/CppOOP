#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;


class Dog : public Pet
{
private:
	int bigLanguage;

public:
	Dog(int bigLanguage, string name, string type, int age);
	void sound();
	void goTo();
	void print();
	~Dog();


};

