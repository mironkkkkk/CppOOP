#pragma once
#define stringi string
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
	stringi fio;
	stringi subject;
	int numberGroup;
	int numberCourse;
public:
	Student(stringi, stringi, int, int);
	stringi getFio();
	void setFio(stringi);
	stringi getSubject();
	void setSublect(stringi);
	int getNumberGroup();
	void setNumberGroup(int);
	int getNumberCourse();
	void getNumberCourse(int);

	void showStudent();
	~Student();
};

