#include "Flat.h"

Flat::Flat(int price, int number, int area)
{
	this->price = price;
	this->number = number;
	this->area = area;
}

int Flat::getPrice()
{
	return price;
}

int Flat::getNumber()
{
	return number;
}

int Flat::getArea()
{
	return area;
}

void Flat::setArea(int area)
{
	this->area = area;
}

void Flat::setNumber(int num)
{
	this->number = num;
}

void Flat::setPrice(int price)
{
	this->price = price;
}

void Flat::operator=(Flat& flat)
{
	this->area = flat.area;
	this->arr = flat.arr;
	this->number = flat.number;
}

void Flat::addHuman(Human& human)
{
	arr.push_back(human);
}

void Flat::popHuman()
{
	arr.pop_back();
}

void Flat::print()
{
	cout << "area: " << area << endl;
	cout << "number: " << number << endl;
	cout << "price: " << price << endl;

	for (auto item : arr) {
		item.print();
	}
}

Flat::~Flat()
{
}
