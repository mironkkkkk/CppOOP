#pragma once
#include <iostream>
using namespace std;

class Array
{
private:
	int size;
	int lenght;
	int* arr;

public:
	stillArr(int);
	showArr();
	editSizeArr(int);
	sortArr();
	minArr();
	maxArr();
	~Array();

};
