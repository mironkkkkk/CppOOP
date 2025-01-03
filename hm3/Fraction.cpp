#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction::getNumerator()
{
	return numerator;
}

int Fraction::getDenominator()
{
	return denominator;
}

void Fraction::show()
{
	cout << this->numerator << endl;
	cout << "-" << endl;
	cout << this->denominator << endl << endl;
}

Fraction::~Fraction()
{
}

Fraction Fraction::operator+(Fraction& Fraction2)
{
	int num1 = Fraction2.numerator * this->denominator;
	int num2 = this->numerator * Fraction2.denominator;

	Fraction result(num1 + num2, this->denominator * Fraction2.denominator);

	return result;
}

Fraction Fraction::operator-(Fraction& Fraction2)
{
	int num1 = Fraction2.numerator * this->denominator;
	int num2 = this->numerator * Fraction2.denominator;

	Fraction result(num1 - num2, this->denominator * Fraction2.denominator);

	return result;;
}

Fraction Fraction::operator*(Fraction& Fraction2)
{
	Fraction result(this->numerator * Fraction2.numerator, this->denominator * Fraction2.denominator);

	return result;
}

Fraction Fraction::operator/(Fraction& Fraction2)
{
	Fraction result(this->numerator * Fraction2.denominator, this->denominator * Fraction2.numerator);

	return result;
}
