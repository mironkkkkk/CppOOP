#pragma once
#include <iostream>;
using namespace std;


class MyArray
{
private:
	int size;
	int lenght;
	int* arr;

public:
	MyArray();
	MyArray(int, int*);

	int getSize();
	int getLenght();
	int* getArr();

	void printArr();
	void setSize(int);
	void setArr(int*);

	MyArray operator+ (MyArray&);
	MyArray operator- (MyArray&);
	MyArray operator* (MyArray&);
	MyArray operator/ (MyArray&);
	bool operator== (MyArray&);
	bool operator!= (MyArray&);
	bool operator> (MyArray&);
	bool operator< (MyArray&);
	bool operator>= (MyArray&);
	bool operator<= (MyArray&);
	MyArray operator= (MyArray);
	MyArray operator+= (MyArray&);


	int find (int);
	int pushBack(int);
	int popBack();


	// MyArray(MyArray&); конструктор копирования
	~MyArray();


};

