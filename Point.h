#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;

public:

	Point();
	Point(int, int, int);

	int getX(int);
	void setX(int);

	int getY(int);
	void setY(int);

	int getZ(int);
	void setZ(int);

	void print(int, int, int);
	void save(string);
	void load(string);

	~Point();

};

