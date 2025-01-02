#include "Shot.h"

Shot::Shot(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

int Shot::getNumerator()
{
	return numerator;
}

int Shot::getDenominator()
{
	return denominator;
}

void Shot::show()
{
	cout << this->numerator << endl;
	cout << "-" << endl;
	cout << this->denominator << endl << endl;
}

Shot::~Shot()
{
}

Shot Shot::operator+(Shot& Shot2)
{
	int num1 = Shot2.numerator * this->denominator;
	int num2 = this->numerator * Shot2.denominator;

	Shot result(num1 + num2, this->denominator * Shot2.denominator);

	return result;
}

Shot Shot::operator-(Shot& Shot2)
{
	int num1 = Shot2.numerator * this->denominator;
	int num2 = this->numerator * Shot2.denominator;

	Shot result(num1 - num2, this->denominator * Shot2.denominator);

	return result;;
}

Shot Shot::operator*(Shot& Shot2)
{
	Shot result(this->numerator * Shot2.numerator, this->denominator * Shot2.denominator);

	return result;
}

Shot Shot::operator/(Shot& Shot2)
{
	Shot result(this->numerator * Shot2.denominator, this->denominator * Shot2.numerator);

	return result;
}
