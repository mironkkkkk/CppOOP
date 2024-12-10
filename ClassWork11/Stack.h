#pragma once
#include <iostream>
#include "List.h"
using namespace std;

template <typename T>
class Stack
{
private:
	List<T> arr;
public:
	Stack(T* arr, int size) : arr(arr, size) { }
	void pushBack();
	void popBack();
	T top();
	~Stack();
};

template<typename T>
inline void Stack<T>::pushBack()
{
	arr.push_back();
}

template<typename T>
inline void Stack<T>::popBack()
{
	arr.pop_end();
}

template<typename T>
inline T Stack<T>::top()
{
	Node<T>* p = this->arr.getFirst();
	while (p->next != nullptr) {
		p = p->next;
	}
	return p->value;
}

template<typename T>
inline Stack<T>::~Stack()
{
	arr.clearMemory();
}
