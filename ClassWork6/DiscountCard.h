#pragma once
#include <iostream>
#define random(min, max) ((rand()%(int)(((max) + 1)-(min)))+ (min))
using namespace std;

class DiscountCard
{
private:
	int* number;
	int balance;
public:
	DiscountCard();
	int* getNumber();
	int getBalance();

	void addBalance(int);
	void minesBalance(int);
	void showCard();
	~DiscountCard();

};

