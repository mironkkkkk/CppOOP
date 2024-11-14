#include <iostream>
#include "MyArray.h"
using namespace std;

template <typename T>
void operator>> (istream& in, MyArray<T>& a) {
	cout << "Enter size: ";
	in >> a.size;
	delete[] a.arr;
	a.arr = new int[a.size];
	for (int i = 0; i < a.size; i++) {
		in >> a.arr[i];
		cout << " ";
	}
}

template <typename T>
void operator<< (ostream& out, MyArray<T>& a) {
	for (int i = 0; i < a.size; i++) {
		cout << a.arr[i] << " ";
	}cout << endl;
	cout << "lenght: " << a.lenght;
	cout << "size: " << a.size;
}

int main()
{
	int* arr = new int[5]{1,2,3,4,5};
	MyArray<int> arr1(5, arr);
	MyArray<int> arr2(5, arr);
	(arr1 + arr2).printArr();

}

