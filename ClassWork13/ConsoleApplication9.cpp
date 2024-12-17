#include <iostream>
#include "myStd.h"

using namespace myStd;

int main()
{
    int** arr;
    int row = 3;
    int col = 3;
    arr = memory(row, col);
    fill(arr, row, col);
    print(arr, row, col);

}

