#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Date {

friend void operator>>(istream&, Date&);
friend void operator<<(ostream&, Date&);


private:
	int day;
	int month;
	int year;

public:
	Date(int, int, int);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int);
	void setYear(int);
	void setMonth(int);
	void addDay();
	int summDay();
	void operator++ ();
	void operator-- ();
	bool operator!= (Date&);
	bool operator== (Date&);
	bool operator> (Date&);
	bool operator< (Date&);
	void operator= (Date&);
	void operator+= (Date&);
	void operator-= (Date&);
	void operator() ();

	~Date();

};

