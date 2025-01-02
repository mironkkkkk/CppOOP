#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shot {

private:
	int numerator;
	int denominator;
	
public:
	Shot(int, int);
	int getNumerator();
	int getDenominator();
	void show();
	~Shot();

	Shot operator+ (Shot&);
	Shot operator- (Shot&);
	Shot operator* (Shot&);
	Shot operator/ (Shot&);
};


