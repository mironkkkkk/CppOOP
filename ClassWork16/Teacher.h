#pragma once
#include <iostream>
#include "Group.h"
#include "Human.h"
#include <string>
using namespace std;


class Teacher : protected Human{
	Group group;
	string login;
	string password;

	Teacher();
	string getLogin();
	string getPass();
	~Teacher();
};

