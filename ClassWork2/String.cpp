#include "String.h"

String::String()
{
	this->size = 80;
	this->length = 0;
	this->str = new char[this->size];
}

String::String(int size)
{
	this->size = size;
	this->length = 0;
	this->str = new char[this->size];
}

int String::getSize()
{
	return this->size;
}

int String::getLength()
{
	return this->length;
}

const char* String::getStr()
{
	return this->str;
}

void String::setStr()
{

}

String::String(char* str, int length)
{
	this->length = length;
	this->size = length;
	this->str = new char[length];

	for (int i = 0; i < length; i++) {
		this->str[i] = str[i];
	}
}

String::String(const String& str)
{
	this->size = str.size;
	this->length = str.length;
	this->str = new char[length];

	for (int i = 0; i < this->size; i++) {
		this->str[i] = str.str[i];
	}

}

String::~String()
{
	delete[] this->str;
}