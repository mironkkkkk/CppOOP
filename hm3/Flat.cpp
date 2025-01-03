#include "Flat.h"

Flat::Flat(string type, int price, int size)
{
	this->price = price;
	this->size = size;
	this->type = type;
}

string Flat::getType()
{
	return type;
}

int Flat::getSize()
{
	return size;
}

int Flat::getPrice()
{
	return price;
}

void Flat::setType(string type)
{
	this->type = type;
}

void Flat::setSize(int size)
{
	this->size = size;
}

void Flat::setPrice(int price)
{
	this->price = price;
}

bool Flat::operator==(Flat& Flat2)
{
	if (this->getSize() == Flat2.getSize()) {
		return true;
	}
	else {
		return false;
	}
}

void Flat::operator=(Flat& Flat2)
{
	this->setSize(Flat2.getSize());
	this->setType(Flat2.getType());
	this->setPrice(Flat2.getPrice());
}

bool Flat::operator>(Flat& Flat2)
{
	if (this->getPrice() == Flat2.getPrice() || this->getPrice() < Flat2.getPrice()) {
		return false;
	}
	else {
		return true;
	}
}

Flat::~Flat()
{
}
