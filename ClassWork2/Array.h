#include "Array.h"

void Array::copyArr(int* arr2)
{
	
}

Array::stillArr(int)
{
	this->size = size;
	int* arr = new int[this->size];

	for (int i = 0; i < this->size; i++) {
		cout << "enter num: ";
		cin >> arr[i];
		cout << endl;
	}
}

Array::showArr()
{
	cout << "arr: ";
	for (int i = 0; i < size; i++) {
		cout << i << " ";
	}
	cout << endl;
}

Array::editSizeArr(int)
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

Array::sortArr()
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

Array::minArr()
{
	int* arr = new int[size];
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
	cout << "min: " << min;
}

Array::maxArr()
{
	int* arr = new int[size];
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	cout << "max: " << max;
}



Array::~Array()
{
}
