#include <iostream>
#include "Car.h"
#include "LivEn.h"
using namespace std;

int main()
{
    Car cars[10];

    // переменные для подставления значение
    int searchNumberTestInt;
    string searchNumberTestStr;

    for (int i = 0; i < 10; i++) {
        cars[i].fillCar();
        cout << endl;
    }

    for (int i = 0; i < 10; i++) {
        cars[i].printCar();
        cout << endl;
    }

    // Поиск машины по номеру
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            if (cars[i].number.CharNumber = nullptr) {
                if (cars[i].number.IntNumber == searchNumberTestInt) {
                    cout << "car you search for number: ";
                    cars[i].printCar();
                    break;
                }

            }
            else {
                if (cars[i].number.CharNumber == searchNumberTestStr) {
                    cout << "car you search for number: ";
                    cars[i].printCar();
                    break;
                }

            }
        }
    }
    




    LivEn liv[10];

    for (int i = 0; i < 10; i++) {
        liv[i].printObj();
        cout << endl;
    }
}