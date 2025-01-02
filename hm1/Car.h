#pragma once
#include <iostream>
using namespace std;


union Number
{
	int IntNumber;
	char* CharNumber;
};

struct Car {

	string color;
	string model;
	Number number;

	Car();
	void fillCar();
	void printCar();
	void editCar();
	void setColor(string);
	void setModel(string);
	void setNumber();
	~Car();

};