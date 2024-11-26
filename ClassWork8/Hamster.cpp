#include "Hamster.h"

Hamster::Hamster(bool kriminal, string nickName, string type, string breed, int age): Pet(nickName, type, breed, age)
{
	this->kriminal = kriminal;
	this->age = age;
	this->breed = breed;
	this->nickName = nickName;
	this->type = type;
}

void Hamster::Show()
{
	cout << "name: " << nickName;
}

void Hamster::Shout()
{
	cout << "Humster is angry.Tap tap tap.";
}

void Hamster::Type()
{
	cout << "type: " << type;
}

bool Hamster::getKriminal()
{
	return kriminal;
}

void Hamster::setKriminal(bool kriminal)
{
	this->kriminal = kriminal;
}

Hamster::~Hamster()
{
}
