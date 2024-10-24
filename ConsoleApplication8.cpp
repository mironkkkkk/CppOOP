#include <iostream>
#include <string>
#include "Student.h"
#include "Point.h"
using namespace std;

//class Student {
//public:
//    string name;
//    int id;
//
//public:
//    Student() {
//        name = "";
//        id = 0;
//        cout << "def constructor" << endl;
//    }
//
//    Student(string name, int id) {
//        this->name = name;
//        this->id = id;
//        cout << "constructor" << endl;
//    }
//
//    ~Student() {
//        cout << "destructor" << endl;
//    }
//
//    string getName() {
//        return name;
//    }
//
//    void setName(string name) {
//        this->name = name;
//    }
//
//
//};

int main()
{
	Student ivan("vfww", "wdwddf8fw", "wdwdyuwdw", "wdwtdfw7td", "vfww", "wdwddf8fw", "wdwdyuwdw", "wdwtdfw7td", 9);
	ivan.print();


	Point point1(1, 4, 2);
	point1.save("save.txt");
	Point point2(4, 5, 6);
	point2.save("save2.txt");
	point1.load("save2.txt");
	point1.save("save.txt");

}

