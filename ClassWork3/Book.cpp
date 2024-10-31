#include "Book.h"

Book::Book(string avtor, string name, string publish, int years, int countPages)
{
	this->avtor = avtor;
	this->name = name;
	this->publish = publish;
	this->years = years;
	this->countPages = countPages;
}

void Book::copyBook(Book)
{
	this->avtor = avtor;
	this->name = name;
	this->publish = publish;
	this->years = years;
	this->countPages = countPages;
}

string Book::getAvtor() const 
{
	return this->avtor;
}

string Book::getName() const
{
	return this->name;
}

string Book::getPublish() const
{
	return this->publish;
}

int Book::getYears() const
{
	return this->years;
}

void Book::showBook() const
{
	cout << "avtor: " << avtor << endl << "name: " << name << endl << "publish: " << publish << endl << "years: " << years << endl << "count pages: " << countPages;
	cout << endl;
}

Book::~Book()
{
}
