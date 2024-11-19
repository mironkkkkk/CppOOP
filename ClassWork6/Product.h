#pragma once
#include <iostream>
#include <string>
using namespace std;


class Product
{
private:
	string name;
	int price;
public:
	Product(string, int);
	~Product();
};

