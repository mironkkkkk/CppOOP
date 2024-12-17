#pragma once
#include <iostream>

namespace myStd {

	int** memory(int row, int coll);
	void fill(int** arr, int row, int coll);
	void randomFill(int** arr, int row, int col);
	void print(int** arr, int row, int col);
	void arrToMatrix(int* arr, int row, int col);
	void matrixToArr(int* arr1, int** arr2, int row, int col);
	void sortMatrix(int** arr, int row, int col);
	void matrixPlus(int** arr1, int** arr2, int row1, int col1, int row2, int col2);
	void matrixUmn(int** arr1, int row, int col, int num);

}

