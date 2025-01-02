#include "Lift.h"

Lift::Lift(int low, int hight, bool state)
{
	this->low = low;
	this->hight = hight;
	this->state = state;
}

bool Lift::getState()
{
	return state;
}

void Lift::stateLift()
{
	if (this->state = true) {
		cout << "list on" << endl;
	}
	else {
		cout << "lift off" << endl;
	}
}

void Lift::turnLift()
{
	if (state == true) {
		state = false;
	}
	else {
		state = true;
	}
	stateLift();
}

void Lift::liftFlor(int flor)
{
	if (state) {
		if (flor >= this->low && flor <= this->hight) {
			this->flor = flor;
			cout << "lift on flor " << flor << endl;
		}
		else {
			cout << "incorrect" << endl;
		}
	}
	else {
		cout << "lift doesn't work";
	}
	
}

void Lift::depDip(int low, int hight)
{
	if (flor < low || flor > hight) {
		cout << "incorrect";
	}
	else {

		this->low = low;
		this->hight = hight;
	}
}

void Lift::LiftIsFlor()
{
	cout << "lift on: " << getFlor();
}

int Lift::getFlor()
{
	return flor;
}

Lift::~Lift()
{
}
