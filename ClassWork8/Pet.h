#pragma once
#include <iostream>
using namespace std;

class Pet
{
protected:
	string nickName;
	string type;
	string breed;
	int age;

public:
	Pet(string, string, string , int);

	string getNickName();
	void setNickName(string);
	string getType();
	void setType(string);
	string getBreed();
	void setBreed(string);
	int getAge();
	void setAge(int);

	virtual void Shout() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;

	virtual ~Pet();
};

