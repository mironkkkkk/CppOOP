#pragma once
#include <iostream>;
using namespace std;

template <typename T>
class MyArray
{
	friend void operator>> (istream& in, MyArray& a);
	friend void operator<< (ostream& out, MyArray& a);

private:
	int size;
	int lenght;
	int* arr;

public:
	MyArray();
	MyArray(int, T*);

	int getSize();
	int getLenght();
	int* getArr();

	void printArr();
	void setSize(int);
	void setArr(T*);

	void reverse();
	void remove(int);
	void resize(int);

	MyArray<T> operator+ (MyArray<T>&);
	MyArray<T> operator- (MyArray<T>&);
	MyArray<T> operator* (MyArray<T>&);
	MyArray<T> operator/ (MyArray<T>&);
	bool operator== (MyArray<T>&);
	bool operator!= (MyArray<T>&);
	bool operator> (MyArray<T>&);
	bool operator< (MyArray<T>&);
	bool operator>= (MyArray<T>&);
	bool operator<= (MyArray<T>&);
	MyArray<T> operator= (MyArray<T>);
	MyArray<T> operator+= (MyArray<T>&);
	void operator() (MyArray<T>&);
	int operator[] (int);

	T avg(T*, int);

	int find (int);
	int pushBack(int);
	int popBack();

	// MyArray(MyArray&); конструктор копирования
	~MyArray();
};

