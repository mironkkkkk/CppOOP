#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	int* arr = new int[] {1,2,3,4,5};
	Stack<int> stack(arr, 5);
	cout << stack.top();






}

