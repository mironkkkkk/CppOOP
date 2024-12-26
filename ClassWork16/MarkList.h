#pragma once
#include <iostream>
#include <vector>
using namespace std;


class MarkList
{

	vector<int> mark;
	string subject;
	int examMark;

	MarkList();
	int getExamMark();
	string getSubject();
	~MarkList();
};

