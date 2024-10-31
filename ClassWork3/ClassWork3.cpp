#include <iostream>
#include "Book.h"
#include "Worker.h"
using namespace std;



void printBookAvtor(Book* arr, int size, string avtor) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].getAvtor() == avtor) {
            count++;
            cout << "название " << arr[i].getName() << endl;
        }
    }
    cout << "всего таких книг: " << count << endl;
}
void printBookPublish(Book* arr, int size, string publish) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].getPublish() == publish) {
            count++;
            cout << "название " << arr[i].getName() << endl;
        }
    }
    cout << "всего таких книг: " << count << endl;
}
void printBookYears(Book* arr, int size, int years) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].getYears() == years) {
            count++;
            cout << "название " << arr[i].getName() << endl;
        }
    }
    cout << "всего таких книг: " << count << endl;
}



void workerCountYear(Worker* arr, int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].getYears() > num) {
            cout << arr[i].getName() << " " << arr[i].getLastName() << " " << arr[i].getFathername() << endl;
            count++;
        }
    }
    cout << "всего таких: " << count << endl;
}

void workerSalary(Worker* arr, int size, int salary) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].getSalary() > salary) {
            cout << arr[i].getName() << " " << arr[i].getLastName() << " " << arr[i].getFathername() << endl;
            count++;
        }
    }
    cout << "всего таких: " << count << endl;
}

void workerShould(Worker* arr, int size, string should) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].getShould() == should) {
            cout << arr[i].getName() << " " << arr[i].getLastName() << " " << arr[i].getFathername() << endl;
            count++;
        }
    }
    cout << "всего таких: " << count << endl;
}


int main()
{
    setlocale(LC_ALL, "rus");
    const int SIZE = 3;

    /*Book book1("Pushkin", "Y lokomoria dub zeleniy", "Moscow", 2000, 52);
    Book book2("Maiakovskii", "Tri cota", "Piter", 2002, 48);
    Book book3("Lermontov", "Dochka", "Rostov", 2010, 72);


    Book* arr = new Book[SIZE]{ book1, book2, book3};
    
    printBookAvtor(arr, SIZE, "Pushkin");
    printBookPublish(arr, SIZE, "Piter");
    printBookYears(arr, SIZE, 2010);*/

    Worker worker1("Ivan", "Popov", "Kirillovich", "Junior worker", 4, 10000);
    Worker worker2("Arseni", "Rubchinski", "Alexandrovich", "Pro worker", 8, 100000);
    Worker worker3("Volodia", "Ivanov", "Matveevich", "Midle worker", 15, 50000);

    Worker* arr = new Worker[SIZE]{worker1, worker2, worker3}; 

    workerCountYear(arr, SIZE, 2);
    workerSalary(arr, SIZE, 10000);
    workerShould(arr, SIZE, "Midle worker");

}
