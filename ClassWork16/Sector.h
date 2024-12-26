#pragma once
#include <iostream>
#include "Schedule.h"
using namespace std;


class Sector{
	string address;
	Schedule* schedule;

	Sector();
	string getAddress();
	~Sector();

};

