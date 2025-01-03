#include "Overcoat.h"

Overcoat::Overcoat(string size, string type, string color, int price)
{
	this->size = size;
	this->type = type;
	this->color = color;
	this->price = price;
}

Overcoat::Overcoat(string size, string type)
{
	this->size = size;
	this->type = type;
	this->color = "none";
	this->price = 0;
}

string Overcoat::getColor()
{
	return color;
}

string Overcoat::getType()
{
	return type;
}

string Overcoat::getSize()
{
	return size;
}

int Overcoat::getPrice()
{
	return price;
}

void Overcoat::setColor(string color)
{
	this->color = color;
}

void Overcoat::setType(string type)
{
	this->type = type;
}

void Overcoat::setSize(string size)
{
	this->size = size;
}

void Overcoat::setPrice(int price)
{
	this->price = price;
}

void Overcoat::operator==(Overcoat& Overcoat2)
{
	if (this->getType() == Overcoat2.getType()) {
		cout << "type equal" << endl;
		if (this->getColor() == Overcoat2.getColor()) {
			cout << "color equal" << endl;
			if (this->getSize() == Overcoat2.getSize()) {
				cout << "size equal" << endl;
			}
			else {
				cout << "size not equal" << endl;
			}
		}
		else {
			cout << "color not equal" << endl;
			if (this->getSize() == Overcoat2.getSize()) {
				cout << "size equal" << endl;
			}
			else {
				cout << "size not equal" << endl;
			}
		}
	}
	else {
		cout << "type not equal" << endl;
		if (this->getColor() == Overcoat2.getColor()) {
			cout << "color equal" << endl;
			if (this->getSize() == Overcoat2.getSize()) {
				cout << "size equal" << endl;
			}
			else {
				cout << "size not equal" << endl;
			}
		}
		else {
			cout << "color not equal" << endl;
			if (this->getSize() == Overcoat2.getSize()) {
				cout << "size equal" << endl;
			}
			else {
				cout << "size not equal" << endl;
			}
		}
	}
}

void Overcoat::operator=(Overcoat& Overcoat2)
{
	this->setColor(Overcoat2.getColor());
	this->setSize(Overcoat2.getSize());
	this->setType(Overcoat2.getType());
}

bool Overcoat::operator>(Overcoat& Overcoat2)
{
	if (this->getPrice() == Overcoat2.getPrice() || this->getPrice() < Overcoat2.getPrice()) {
		return false;
	}
	else {
		return true;
	}
}

Overcoat::~Overcoat()
{
}
