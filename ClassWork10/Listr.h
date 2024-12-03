#pragma once
#include <iostream>
using namespace std;

template <typename T>
struct Node {

	T value;
	Node* next;

	Node(T value) : value(value), next(nullptr) {};
	~Node();
};

template <typename T>
class List
{
	Node<T>* first;
public:
	List() : first(nullptr) {};
	void push_back(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}

		Node<T>* p = this->first;
		while (p->next != nullptr) {
			p = p->next;
		}
		p->next = new Node<T>(value);
	}

	void start(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}

		Node<T>* p = new Node<T>(value);
		p->next = this->first;
	}

	void pop_start(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}

		delete first;
	}

	void pop_end(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}
		Node<T>* p = this->first;
		while (p->next->next != nullptr) {
			p = p->next;
		}
		delete p->next;
		p->next = nullptr;
	}

	Node* searchElement(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}
		Node<T> p = this->first;
		while (p != nullptr) {
			if (p->value == value) {
				return p;
			}
			p = p->next;
		}
	}

	T* operator[] (int size) {
		Node<T>* p = first;
		int index = 0;
		while (p->next != nullptr) {
			if (index == size) {
				return p;
			}
			index++;
		}
	}

	void clearMemory() {
		Node<T>* p = first;
		while (p != nullptr) {
			delete p;
			p = p->next;
		}
	}

	bool empty() { return (first == nullptr) ? true : false; }
};
