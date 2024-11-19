#include "DiscountCard.h"

DiscountCard::DiscountCard()
{
	this->number = new int[16];
	for (int i = 0; i < 16; i++) {
		this->number[i] = random(0, 10);
	}
	this->balance = 0;
}

int* DiscountCard::getNumber()
{
	return number;
}

int DiscountCard::getBalance()
{
	return balance;
}

void DiscountCard::addBalance(int number)
{
	balance += number;
}

void DiscountCard::minesBalance(int number)
{
	balance -= number;
}

void DiscountCard::showCard()
{
	cout << "number card: ";
	for (int i = 0; i < 16; i++) {
		cout << number[i];
	}
	cout << endl << "balance: " << balance;
}

DiscountCard::~DiscountCard()
{
}
