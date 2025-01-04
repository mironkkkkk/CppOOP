#include "Home.h"

Home::Home(string address, int numOfRooms, int area)
{
	this->area = area;
	this->address = address;
	this->numOfRooms = numOfRooms;
	this->numOfFloor = 1;
}

Home::Home(string address, int numOfRooms, int area, int numOfFloor)
{
	this->area = area;
	this->address = address;
	this->numOfRooms = numOfRooms;
	this->numOfFloor = numOfFloor;
}

int Home::getArea()
{
	return area;
}

int Home::getNumOfRooms()
{
	return numOfRooms;
}

int Home::getNumOfFloor()
{
	return numOfFloor;
}

string Home::getAddress()
{
	return address;
}

void Home::setArea(int area)
{
	this->area = area;
}

void Home::setAddress(string address)
{
	this->address = address;
}

void Home::setNumOfRooms(int numOfRooms)
{
	this->numOfRooms = numOfRooms;
}

void Home::setNumOfFloor(int numOfFloor)
{
	this->numOfFloor = numOfFloor;
}

void Home::operator=(Home& home)
{
	this->area = home.area;
	this->arr = home.arr;
	this->address = home.address;
	this->numOfFloor = home.numOfFloor;
	this->numOfRooms = home.numOfRooms;

}

void Home::addFlat(Flat& flat)
{
	arr.push_back(flat);
}

void Home::popFlat()
{
	arr.pop_back();
}

void Home::print()
{
	cout << "area: " << area << endl;
	cout << "address: " << address << endl;
	cout << "numOfRooms: " << numOfRooms << endl;
	cout << "numOfFloor: " << numOfFloor << endl;

	for (auto item : arr) {
		item.print();
	}
}

Home::~Home()
{
}
