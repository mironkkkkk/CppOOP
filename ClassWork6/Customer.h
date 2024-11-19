#pragma once
#include <iostream>
#include <string>
#include "Fio.h"
#include "DiscountCard.h"
using namespace std;

class Customer
{
private:
	Fio fio;
	DiscountCard card;
public:
	Customer(Fio);
	void setNameCustomer(string);
	void setLastNameCustomer(string);
	void setFatherNameCustomer(string);
	void infoCustomer();
	~Customer();

};

