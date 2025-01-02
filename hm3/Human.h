#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human {
private:
	int number;
	string fam;
	string name;
	string otchestvo;
	int date;
public:
	static int num;
	Human(int, string , string, string, int);
	void Show();
	int getNumber();
	void setNumber(int);
	string getFam();
	void setFam(string);
	string getName();
	void setName(string);
	string getOtch();
	void setOtch(string);
	int getDate();
	void setDate(int);
	void copyHuman(Human&);
	~Human();   
};

