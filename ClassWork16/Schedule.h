#pragma once
#include <iostream>
#include <vector>
#include "Lesson.h"
using namespace std;

// ����������
class Schedule : protected Lesson{

	vector<Lesson> v;
	Schedule();
	void addElement(Lesson);
	void deleteElement();
	~Schedule();
};

