#pragma once
#include <iostream>
#include <string>
using namespace std;


class Overcoat {

private:
	string color;
	string type;
	string size;
	int price;

public:
	Overcoat(string, string, string, int);
	Overcoat(string, string);
	string getColor();
	string getType();
	string getSize();
	int getPrice();
	void setColor(string);
	void setType(string);
	void setSize(string);
	void setPrice(int);
	void operator==(Overcoat&);
	void operator=(Overcoat&);
	bool operator>(Overcoat&);
	~Overcoat();

};

