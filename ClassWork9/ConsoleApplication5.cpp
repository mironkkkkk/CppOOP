#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{

	int* arr = new int[] {1, 32, 4, 5, 6, 7, 3, 3, 6, 7, 3, 2352};
	BinaryTree tree(arr, 12);
	tree.printTree(tree.getRood());
}
