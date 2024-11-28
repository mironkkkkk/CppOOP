#pragma once
#include <iostream>
using namespace std;

struct Node {

	int value;
	Node* left;
	Node* right;

	Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinaryTree
{

private:
	Node* root;

	void clearMemory(Node*);
public:
	BinaryTree(int* , int);
	void insert(int, Node*);
	Node* deleteTree(int, Node*);
	~BinaryTree();
	Node* getRood() { return this->root; }
	void printTree(Node*);
};

