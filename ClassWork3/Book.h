#pragma once
#include <iostream>
#include <string>
using namespace std;


class Book
{
private:
	string avtor;
	string name;
	string publish;
	int years;
	int countPages;
public:
	explicit Book(string, string, string, int, int);
	void copyBook(Book);
	string getAvtor() const;
	string getName() const;
	string getPublish() const;
	int getYears() const;
	void showBook() const;
	~Book();
};

