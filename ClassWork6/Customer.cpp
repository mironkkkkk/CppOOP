#include "Customer.h"

Customer::Customer(Fio fio)
{
	fio.setName("none");
	fio.setLastname("none");
	fio.setName("none");
}

void Customer::setNameCustomer(string name)
{
	fio.setName(name);
}

void Customer::setLastNameCustomer(string lastname)
{
	fio.setLastname(lastname);
}

void Customer::setFatherNameCustomer(string fathername)
{
	fio.setFathername(fathername);
}

void Customer::infoCustomer()
{
	fio.showFio();
	cout << endl;
	card.showCard();
}

Customer::~Customer()
{
}
