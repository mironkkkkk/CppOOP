#pragma once
#include <iostream>
#include <string>
using namespace std;

struct LivEn{

	int speed;
	string type;
	string color;
	string feature;

	LivEn();
	void fillLivEn();
	void printObj();
	void editLivEn();
	~LivEn();

};