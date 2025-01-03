#pragma once
#include <iostream>
#include <string>
using namespace std;

class Fraction {

private:
	int numerator;
	int denominator;

public:
	Fraction(int, int);
	int getNumerator();
	int getDenominator();
	void show();
	~Fraction();

	Fraction operator+ (Fraction&);
	Fraction operator- (Fraction&);
	Fraction operator* (Fraction&);
	Fraction operator/ (Fraction&);
};
