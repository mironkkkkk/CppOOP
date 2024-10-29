#include "Array.h"

void Array::stillArr(int size)
{
	this->size = size;
	int* arr = new int[this->size];

	for (int i = 0; i < this->size; i++) {
		cout << "enter num: ";
		cin >> arr[i];
		cout << endl;
	}
}

void Array::showArr()
{
	cout << "arr: ";
	for (int i = 0; i < size; i++) {
		cout << i << " ";
	}
	cout << endl;
}

void Array::editSizeArr(int size)
{
	int* arr = new int[this->size];
	int* buff = new int[size];
	for (int i = 0; i < this->size; i++) {
		buff[i] = arr[i];
	}
	this->size = size;

	delete[] arr;
	arr = buff;
}

void Array::sortArr()
{
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
}

void Array::minArr()
{
	int* arr = new int[size];
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
	cout << "min: " << min;
}

void Array::maxArr()
{
	int* arr = new int[size];
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	cout << "max: " << max;
}

void Array::copyArr(int* arr2)
{
	
}

Array::~Array()
{
}
