#include "BinaryTree.h"

void BinaryTree::clearMemory(Node* root)
{
	if (root == nullptr) {
		return;
	}
	clearMemory(root -> left);
	clearMemory(root->right);
	delete root;
}

BinaryTree::BinaryTree(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		insert(arr[i], root);
	}
}

void BinaryTree::insert(int value, Node* root)
{
	if (this->root = nullptr) {
		this->root = new Node(value);
	}

	if (root == nullptr) {
		return;
	}
	else {
		if (value > root->value) {
			if (root->right = nullptr) {
				root->right = new Node(value);
			}
			else {
				insert(value, root->right);
			}
		}
		else {
			if (root->left == nullptr) {
				root->left = new Node(value);
			}
			else {
				insert(value, root->left);
			}
		}
	}
}



Node* BinaryTree::deleteTree(int value, Node* root) {
	if (root == nullptr) {
		return root;
	}

	if (value < root->value) {
		root->left = deleteTree(value, root->left);
	}
	else if (value > root->value) {
		root->right = deleteTree(value, root->right);
	}
	else {
		if (root->left == nullptr) {
			Node* temp = root->right;
			delete root;
			return temp;
		}
		else if (root->right == nullptr) {
			Node* temp = root->left;
			delete root;
			return temp;
		}

		Node* temp = root->right;
		while (temp && temp->left != nullptr) {
			temp = temp->left;
		}

		root->value = temp->value;

		root->right = deleteTree(temp->value, root->right);
	}

	return root;
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::printTree(Node* root)
{
	printTree(root->left);
	cout << root->value;
	printTree(root->right);
}
