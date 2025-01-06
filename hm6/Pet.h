#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pet
{
protected:
	string name;
	string type;
	int age;
public:
	Pet(string name, int age, string type);
	string getName();
	int getAge();
	string getType();
	virtual void sound();
	virtual void goTo();
	virtual void print();
	virtual ~Pet();
};

