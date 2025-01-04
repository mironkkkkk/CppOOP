#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Human.h"
#include <vector>
using namespace std;

class Flat{

private:
	int price;
	int number;
	int area;

public:
	vector<Human> arr;

	Flat(int, int, int);
	int getPrice();
	int getNumber();
	int getArea();
	void setArea(int);
	void setNumber(int);
	void setPrice(int);
	void operator=(Flat&);
	void addHuman(Human&);
	void popHuman();
	void print();
	~Flat();
};

