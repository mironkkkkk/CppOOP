#include <iostream>
#include "MyArray.h"
using namespace std;


int main()
{
	int* arr = new int[5]{1,2,3,4,5};
	MyArray arr1(5, arr);
	MyArray arr2(5, arr);
	(arr1 + arr2).printArr();

}

