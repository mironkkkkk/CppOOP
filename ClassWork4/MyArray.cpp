#include "MyArray.h"

MyArray::MyArray()
{
}

MyArray::MyArray(int size, int* arr)
{
	this->size = size;
	this->arr = arr;
	this->lenght = size;
}

int MyArray::getSize()
{
	return size;
}

int MyArray::getLenght()
{
	return lenght;
}

int* MyArray::getArr()
{
	return arr;
}

void MyArray::printArr()
{
	for (int i = 0; i < this->size; i++) {
		cout << this->arr[i] << " ";
	}
	cout << endl;
}

void MyArray::setSize(int size)
{
	this->size = size;
}

void MyArray::setArr(int* arr)
{
	this->arr = arr;
}

MyArray MyArray::operator+(MyArray& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] + myArr.arr[i];
	}
	return MyArray{ this->size, newArr};
}

MyArray MyArray::operator*(MyArray&)
{
	return MyArray();
}

MyArray MyArray::operator-(MyArray& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] - myArr.arr[i];
	}
	return MyArray{ this->size, newArr };
}

MyArray MyArray::operator*(MyArray& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] * myArr.arr[i];
	}
	return MyArray{ this->size, newArr };
}

MyArray MyArray::operator/(MyArray& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] / myArr.arr[i];
	}
	return MyArray{ this->size, newArr };
}


/*
* MyArray::MyArray(MyArray& arr)
{
	this->arr = arr.arr;
	this->size = arr.size;
	this->lenght = arr.lenght;
}
*/

MyArray::~MyArray()
{
	delete[]this->arr;
}

bool MyArray::operator==(MyArray& myArr)
{
	if (this->size == myArr.size) {
		for (int i = 0; i < arr[size]; i++) {
			if (this->arr[i] != myArr.arr[i]) {
				return false;
				break;
			}
		}
		return true;
	}
	else { return false; }
}

bool MyArray::operator!=(MyArray& myArr)
{
	if (this->size == myArr.size) {
		return true;
	}
	else { return false; }
}

bool MyArray::operator>(MyArray& myArr)
{
	if (this->size > myArr.size) {
		return true;
	}
	else { return false; }
}

bool MyArray::operator<(MyArray& myArr)
{
	if (this->size < myArr.size) { return true;}
	else { return false; }
}

bool MyArray::operator>=(MyArray& myArr)
{
	if (this->size > myArr.size || this->size == myArr.size) { return true; }
	else { return false; }
}

bool MyArray::operator<=(MyArray& myArr)
{
	if (this->size < myArr.size || this->size == myArr.size) { return true; }
	else { return false; }
}

int MyArray::pushBack(int num)
{
	int* buf = new int[this->size + 1];
	for (int i = 0; i < this->size; i++) {
		buf[i] = arr[i];
	}
	buf[this->size + 1] = num;
	delete[] arr;
	arr = buf;
}

int MyArray::popBack()
{
	int* buf = new int[this->size - 1];
	for (int i = 0; i < this->size - 1; i++) {
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;
}

MyArray MyArray::operator=(MyArray myArr)
{
	delete[] arr;
	this->arr = new int[myArr.size];
	for (int i = 0; i < myArr.size; i++) {
		this->arr[i] = myArr.arr[i];
	}
	return *this;
}

MyArray MyArray::operator+=(MyArray& myArr)
{
	*this = *this + myArr;
	return *this;
}

int MyArray::find(int num)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) { 
			return i; 
			break;
		}
	}
}