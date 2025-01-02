#include <iostream>
#include <string>
#include "Shot.h"
using namespace std;

int main()
{
    
    Shot num1(1,2);
    Shot num2(1,2);

    Shot res = num1 + num2;
    res.show();
    Shot res2 = num1 - num2;
    res2.show();
    Shot res3 = num1 * num2;
    res3.show();
    Shot res4 = num1 / num2;
    res4.show();

}


