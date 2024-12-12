#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Array
{
private:
	int size;
	int length = 0;
	int grow = 1;
	T* arr;

public:
	Array();

	int getSize();
	void setSize(int, int);
	int getLength();
	void setLength(int);
	T* getArr();
	void setArr(T*);

	int getUpperBound() {return length - 1};
	bool isEmpty();
	void add(T);
	void insertAt(T, int);
	void removeAt(int);
	//FreeExtra()
	void removeAll();
	void getAt(int);
	void setAt(T, int);
	Array append(Array arr1, Array arr2);

	~Array();
};

template<typename T>
inline Array<T>::Array()
{
}

template<typename T>
inline int Array<T>::getSize()
{
	return size;
}

template<typename T>
inline void Array<T>::setSize(int size, int grow)
{
	this->size = size;
	this->grow = grow;
	T* arrbuf[size];
	for (int i = 0; i < size; i++) {
		arrbuf[i] = arr[i];
	}delete[] arr;
	arr = buf;
}

template<typename T>
inline int Array<T>::getLength()
{
	return length;
}

template<typename T>
inline void Array<T>::setLength(int length)
{
	this->length = length;
}

template<typename T>
inline T* Array<T>::getArr()
{
	return arr;
}

template<typename T>
inline void Array<T>::setArr(T* arr)
{
	this->arr = arr;
}

template<typename T>
inline bool Array<T>::isEmpty()
{
	return lenght > 0 ? true : false;
}

template<typename T>
inline void Array<T>::add(T obj)
{
	length++;
	T* buf[size + 1];
	this->size = size++;
	for (int i = 0; i < size; i++) {
		buf[i] = arr[i];
	}
	buf[size] = obj;
}

template<typename T>
inline void Array<T>::insertAt(T obj, int index)
{
	length++;
	T* buf[size + 1];
	this->size = size++;
	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}
	buf[index] = obj;
	for (int i = index; i < size; i++) {
		buf[i++] = arr[i--];
	}
	delete[] arr;
	arr = buf;
}

template<typename T>
inline void Array<T>::removeAt(int index)
{
	lenght--;
	T* buf[size - 1];
	this->size = size--;
	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}
	for (int i = index; i < size; i++) {
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;
}

template<typename T>
inline void Array<T>::removeAll()
{
	length = 0;
	delete[] arr;
}

template<typename T>
inline void Array<T>::getAt(int index)
{
	return arr[index];
}

template<typename T>
inline void Array<T>::setAt(T obj, int index)
{
	arr[index] = obj;
}

template<typename T>
inline Array Array<T>::append(Array arr1, Array arr2)
{
}

template<typename T>
inline Array<T>::~Array()
{
}
