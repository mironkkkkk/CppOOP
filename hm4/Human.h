#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human {

private:
	string fio;
	int age;

public:
	Human(string, int);
	string getFio();
	int getAge();
	void setFio(string);
	void setAge(int);
	void print();
	void operator=(Human&);
	~Human();
};


