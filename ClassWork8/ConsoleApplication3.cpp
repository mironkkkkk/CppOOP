#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Hamster.h"
using namespace std;

int main()
{
    //Pet* dog = new Dog(true, "kai", "doge", "dreevnia", 52);
    //dog->Shout();
    //delete dog;
    Pet** pets = new Pet*[3];
    pets[0] = new Dog(true, "kai", "doge", "dreevnia", 52);
    pets[1] = new Cat(20, "pup", "doge", "dreevnia", 52);
    pets[2] = new Hamster(true, "kombat", "doge", "dreevnia", 52);
    for (int i = 0; i < 3; i++) {
        pets[i]->Show();
        cout << endl;
    }
}
