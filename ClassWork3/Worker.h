#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
private:
	string name;
	string lastname;
	string fathername;
	string should;
	int yearAdmis;
	int salary;

public:
	explicit Worker(string, string, string, string, int, int);
	void showWorker();
	int getYears();
	int getSalary();
	string getName();
	string getLastName();
	string getFathername();
	string getShould();
	~Worker();
};

