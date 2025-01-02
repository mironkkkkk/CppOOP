#pragma once
#include <iostream>
#include <string>
using namespace std;

class Lift {
private:
	bool state;
	int low;
	int hight;
	int flor = 1;


public:
	Lift(int, int, bool);
	bool getState();
	void stateLift();
	void turnLift();
	void liftFlor(int);
	void depDip(int low, int hight);
	void LiftIsFlor();
	int getFlor();
	~Lift();

};

