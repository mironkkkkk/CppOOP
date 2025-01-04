#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Flat.h"
using namespace std;

class Home {

private:
	string address;
	int numOfFloor;
	int numOfRooms;
	int area;
	vector<Flat> arr;
public:

	Home(string, int, int);
	Home(string, int, int, int);
	int getArea();
	int getNumOfRooms();
	int getNumOfFloor();
	string getAddress();
	void setArea(int);
	void setAddress(string);
	void setNumOfRooms(int);
	void setNumOfFloor(int);
	void operator=(Home&);
	void addFlat(Flat&);
	void popFlat();
	void print();
	~Home();
};

