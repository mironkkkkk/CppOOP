#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	string surname;
	string fathername;
	string country;
	string city;
	string nameUniver;
	string cityUniver;
	string countryUniver;
	int idGroup;

public:
	Student();
	Student(string, string, string, string, string, string, string, string, int);


	void setName(string);
	string getName(string);

	void setSurname(string);
	string getSurname(string);

	void setFathername(string);
	string getFathername(string);

	void setCountry(string);
	string getCountry(string);

	void setCity(string city);
	string getCity(string city);

	void setNameUniver(string);
	string getNameUniver(string);

	void setCityUniver(string);
	string getCityUniver(string);

	void setCountryUniver(string);
	string getCountryUniver(string);

	void setIdGroup(int);
	int getIdGroup(int);

	void print();

	~Student();
};
