#pragma once
#include <iostream>
#include "Hamster.h"
#include "Pet.h"
using namespace std;


class Hamster: public Pet
{
private:
	bool kriminal;
public:
	Hamster(bool, string, string, string, int);
	void Show();
	void Shout();
	void Type();

	bool getKriminal();
	void setKriminal(bool);
	~Hamster();
};

