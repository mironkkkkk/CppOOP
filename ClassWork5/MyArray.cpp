#include "MyArray.h"

template <typename T>
MyArray<T>::MyArray()
{
}

template <typename T>
MyArray<T>::MyArray(int size, T* arr)
{
	this->size = size;
	this->arr = arr;
	this->lenght = size;
}

template <typename T>
int MyArray<T>::getSize()
{
	return size;
}

template <typename T>
int MyArray<T>::getLenght()
{
	return lenght;
}

template <typename T>
int* MyArray<T>::getArr()
{
	return arr;
}

template <typename T>
void MyArray<T>::printArr()
{
	for (int i = 0; i < this->size; i++) {
		cout << this->arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
void MyArray<T>::setSize(int size)
{
	this->size = size;
}

template <typename T>
void MyArray<T>::setArr(T* arr)
{
	this->arr = arr;
}

template <typename T>
MyArray<T> MyArray<T>::operator+(MyArray<T>& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] + myArr.arr[i];
	}
	return MyArray<T>{ this->size, newArr};
}

template <typename T>
MyArray<T> MyArray<T>::operator-(MyArray<T>& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] - myArr.arr[i];
	}
	return MyArray<T>{ this->size, newArr };
}

template <typename T>
MyArray<T> MyArray<T>::operator*(MyArray<T>& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] * myArr.arr[i];
	}
	return MyArray<T>{ this->size, newArr };
}

template <typename T>
MyArray<T> MyArray<T>::operator/(MyArray<T>& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] / myArr.arr[i];
	}
	return MyArray<T>{ this->size, newArr };
}

template <typename T>
void MyArray<T>::reverse()
{
	for (int i = 0; i < size / 2; i++) {
		swap(arr[i], arr[size - i]);
	}

}


/*
* MyArray::MyArray(MyArray& arr)
{
	this->arr = arr.arr;
	this->size = arr.size;
	this->lenght = arr.lenght;
}
*/
template <typename T>
MyArray<T>::~MyArray()
{
	delete[]this->arr;
}

template <typename T>
bool MyArray<T>::operator==(MyArray<T>& myArr)
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

template <typename T>
void MyArray<T>::remove(int index)
{
	int* buf = new int[size - 1];
	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}
	for (int i = index; i < size; i++) {
		buf[i] = arr[i - 1];
	}
	delete[] arr;
	arr = buf;
}

template <typename T>
bool MyArray<T>::operator!=(MyArray<T>& myArr)
{
	if (this->size == myArr.size) {
		return true;
	}
	else { return false; }
}

template <typename T>
void MyArray<T>::resize(int size)
{
	int* buf = new int[size];
	for (int i = 0; i < size; i++) {
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;
}

template <typename T>
bool MyArray<T>::operator>(MyArray<T>& myArr)
{
	if (this->size > myArr.size) {
		return true;
	}
	else { return false; }
}

template <typename T>
bool MyArray<T>::operator<(MyArray<T>& myArr)
{
	if (this->size < myArr.size) { return true;}
	else { return false; }
}

template <typename T>
bool MyArray<T>::operator>=(MyArray<T>& myArr)
{
	if (this->size > myArr.size || this->size == myArr.size) { return true; }
	else { return false; }
}

template <typename T>
bool MyArray<T>::operator<=(MyArray<T>& myArr)
{
	if (this->size < myArr.size || this->size == myArr.size) { return true; }
	else { return false; }
}

template <typename T>
int MyArray<T>::pushBack(int num)
{
	int* buf = new int[this->size + 1];
	for (int i = 0; i < this->size; i++) {
		buf[i] = arr[i];
	}
	buf[this->size + 1] = num;
	delete[] arr;
	arr = buf;
}

template <typename T>
int MyArray<T>::popBack()
{
	int* buf = new int[this->size - 1];
	for (int i = 0; i < this->size - 1; i++) {
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;
}

template <typename T>
MyArray<T> MyArray<T>::operator=(MyArray<T> myArr)
{
	delete[] arr;
	this->arr = new int[myArr.size];
	for (int i = 0; i < myArr.size; i++) {
		this->arr[i] = myArr.arr[i];
	}
	return *this;
}

template <typename T>
MyArray<T> MyArray<T>::operator+=(MyArray<T>& myArr)
{
	*this = *this + myArr;
	return *this;
}

template <typename T>
int MyArray<T>::operator[](int index)
{
	return arr[index];
}

template <typename T>
int MyArray<T>::find(int num)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) { 
			return i; 
			break;
		}
	}
}

template <typename T>
void MyArray<T>::operator()(MyArray<T>& myArr)
{
	for (int i = 0; i < myArr.size; i++) {
		for (int j = 0; j < myArr.size - 1; j++) {
			if (myArr.arr[j] > myArr.arr[j + 1]) {
				int b = myArr.arr[j];
				myArr.arr[j] = myArr.arr[j + 1];
				myArr.arr[j + 1] = b;
			}
		}
	}
}

template <typename T>
T avg(T* arr, int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	sum /= size;
	return sum;
}