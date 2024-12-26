#pragma once
#include <iostream>
using namespace std;

class Human {
	string FIO;
	int age;
	string phoneNumber;

	Human();
	string getFIO();
	string getPhoneNumber();
	int getAge();
	~Human();

};
