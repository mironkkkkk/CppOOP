#include "Student.h"

Student::Student()
{
}

Student::Student(string name, string surname, string fathername, string country, string city, string nameUniver, string cityUniver, string countryUniver, int idGroup)
{
	this->name = name;
	this->surname = surname;
	this->fathername = fathername;
	this->country = country;
	this->city = city;
	this->nameUniver = nameUniver;
	this->cityUniver = cityUniver;
	this->countryUniver = countryUniver;
	this->idGroup = idGroup;
}

Student::~Student()
{
}

void Student::print(){
	cout << "name: " << name << endl << "surname: " << surname << endl << "fathername: " << fathername << endl << "country: " << country << endl << "city: " << city << endl << "nameUniver: " << nameUniver << endl << "countryUniver: " << countryUniver << endl << "idGroup: " << idGroup;
}

void Student::setName(string name) {
	this->name = name;
}
string Student::getName(string name) {
	return name;
}

void Student::setSurname(string surname) {
	this->surname = surname;
}
string Student::getSurname(string surname) {
	return surname;
}

void Student::setFathername(string fathername) {
	this->fathername = fathername;
}
string Student::getFathername(string fathername) {
	return fathername;
}

void Student::setCountry(string country) {
	this->country = country;
}
string Student::getCountry(string country) {
	return country;
}

void Student::setCity(string city) {
	this->city = city;
}
string Student::getCity(string city) {
	return city;
}

void Student::setNameUniver(string nameUniver) {
	this->nameUniver = nameUniver;
}
string Student::getNameUniver(string nameUniver) {
	return nameUniver;
}

void Student::setCityUniver(string cityUniver) {
	this->cityUniver = cityUniver;
}
string Student::getCityUniver(string cityUniver) {
	return cityUniver;
}

void Student::setCountryUniver(string countryUniver) {
	this->countryUniver = countryUniver;
}
string Student::getCountryUniver(string countryUniver) {
	return countryUniver;
}

void Student::setIdGroup(int idGroup) {
	this->idGroup = idGroup;
}
int Student::getIdGroup(int idGroup) {
	return idGroup;
}
