#include <iostream>
#include <string>
#include "Complex.h"
#include "Date.h"
using namespace std;


void operator>>(istream& in, Date& Date) {
    in >> Date.day;
    if (Date.day > 30) Date.day = 30;
    in >> Date.month;
    if (Date.month > 12) Date.month = 12;
    in >> Date.year;
}
void operator<<(ostream& out, Date& Date){
    cout << Date.day << "." << Date.month << "." << Date.year << endl;
}

int main()
{
    //Complex num1(1, 2, 3);
    //Complex num2(1, 2, 3);

    //num1 + num2;
    //cout << endl;
    //num1 - num2;
    //cout << endl;
    //num1 * num2;
    //cout << endl;
    //num1 / num2;
    //cout << endl;



}
