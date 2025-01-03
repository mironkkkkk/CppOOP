#include "Complex.h"

Complex::Complex(int a, int b, int i)
{
	this->a = a;
	this->b = b;
	this->i = i;
}

int Complex::getRes()
{
	int resNum = a + (b * i);
	return resNum;
}

Complex::~Complex()
{
}

void Complex::operator+(Complex& Complex2)
{
	cout << this->getRes() + Complex2.getRes();
}

void Complex::operator-(Complex& Complex2)
{
	cout << this->getRes() - Complex2.getRes();
}

void Complex::operator*(Complex& Complex2)
{
	cout << this->getRes() * Complex2.getRes();
}

void Complex::operator/(Complex& Complex2)
{
	cout << this->getRes() / Complex2.getRes();
}
