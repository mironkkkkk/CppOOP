#include "myStd.h"

int** myStd::memory(int row, int col) {
	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int [col];
	}
	return arr;
}

void myStd::fill(int** arr, int row, int col)
{
	const char* ex = "not diget";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cin >> arr[i][j];
			if (std::cin.fail()) {
				throw ex;
			}
		}
	}
}

void myStd::randomFill(int** arr, int row, int col) {
	int min = -50;
	int max = 49;
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = min + rand() % (max - min);
		}
	}
}

void myStd::print(int** arr, int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void myStd::arrToMatrix(int** arr, int* arr2, int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = arr2[count++];
		}
	}
}

void myStd::matrixToArr(int* arr1, int** arr2, int row, int col)
{
	arr1 = new int[row * col];

	for (int k = 0; k < row * col; k++) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				arr1[k] = arr2[i][j];
			}
		}
	}
}

void myStd::sortMatrix(int** arr, int row, int col)
{
	int* buf = new int[row * col];
	matrixToArr(buf, arr, row, col);

	for (int i = 0; i < row; i++) {
		for (int j = col; j < col; j++) {
			if (buf[j] > buf[j + 1]) {
				int b = buf[j];
				buf[j] = buf[j + 1];
				buf[j + 1] = b;
			}
		}
	}
	arrToMatrix(arr, buf, row, col);
}

void myStd::matrixPlus(int** arr1, int** arr2, int row1, int col1, int row2, int col2)
{
	const char* ex = "Not eaqle";
	if ((row1 != row2 || col2 != col1)) {
		std::cout << "error";
	}
	else { 
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < col1; j++) {
				arr1[i][j] += arr2[i][j];
			}
		}
	}

	throw ex;
}

void myStd::matrixUmn(int** arr, int row, int col, int num)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] *= num;
		}
	}
}