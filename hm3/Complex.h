#pragma once
#include <iostream>
using namespace std;


class Complex {

private:
	int a;
	int b;
	int i;

public:
	Complex(int , int , int);
	int getRes();
	~Complex();

	void operator+(Complex&);
	void operator-(Complex&);
	void operator*(Complex&);
	void operator/(Complex&);




};

