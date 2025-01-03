#include "Date.h"

Date::Date(int day, int year, int month)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

void Date::setDay(int day)
{
	this->day = day;
}

void Date::setYear(int year)
{
	this->year = year;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::addDay()
{

	this->day += 1;
	if (day > 30) {
		this->month += 1;
		if (this->month > 12) {
			this->month = 1;
			this->year += 1;
		}
		this->day = 1;
	}
}

int Date::summDay()
{
	return this->day + this->month * 30 + this->year * 365;
}

void Date::operator++()
{
	this->day += 1;
	if (day > 30) {
		this->month += 1;
		if (this->month > 12) {
			this->month = 1;
			this->year += 1;
		}
		this->day = 1;
	}
}

void Date::operator--()
{
	this->day -= 1;
	if (day < 1) {
		this->month -= 1;
		if (this->month < 1) {
			this->month = 12;
			this->year -= 1;
		}
		this->day = 30;
	}
}

bool Date::operator!=(Date& Date2)
{
	if (this->summDay() != Date2.summDay()) {
		return true;
	}
	else {
		return false;
	}
}

bool Date::operator==(Date& Date2)
{
	if (this->summDay() == Date2.summDay()) {
		return true;
	}
	else {
		return false;
	}
}

bool Date::operator>(Date& Date2)
{
	if (this->summDay() > Date2.summDay()) {
		return true;
	}
	else {
		return false;
	}
}

bool Date::operator<(Date& Date2)
{
	if (this->summDay() < Date2.summDay()) {
		return true;
	}
	else {
		return false;
	}
}

void Date::operator=(Date& Date2)
{
	this->setDay(Date2.getDay());
	this->setYear(Date2.getYear());
	this->setMonth(Date2.getMonth());
}

void Date::operator+=(Date& Date2)
{
	this->day += Date2.day;
	if (day > 30) {
		this->month += 1;
		if (this->month > 12) {
			this->month = 1;
			this->year += 1;
		}
		this->day = 1;
	}

	this->month += Date2.month;
	if (this->month > 12) {
		this->month = 1;
		this->year += 1;
	}
	this->year += Date2.year;
}

void Date::operator-=(Date& Date2)
{
	this->day -= Date2.day;
	if (day < 1) {
		this->month -= 1;
		if (this->month < 1) {
			this->month = 12;
			this->year -= 1;
		}
		this->day = 30;
	}

	this->month -= Date2.month;
	if (this->month < 1) {
		this->month = 12;
		this->year -= 1;
	}
	this->year -= Date2.year;
}

void Date::operator()()
{
	cout << "day: " << day << endl << "month: " << month << endl << "years: " << year;

}

Date::~Date()
{
}
