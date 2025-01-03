#pragma once
#include <iostream>
#include <string>
using namespace std;


class Flat {

private:
	string type;
	int size;
	int price;

public:
	Flat(string, int, int);
	string getType();
	int getSize();
	int getPrice();
	void setType(string);
	void setSize(int);
	void setPrice(int);

	bool operator==(Flat&);
	void operator=(Flat&);
	bool operator>(Flat&);

	~Flat();
};

