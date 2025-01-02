#include "Car.h"

Car::Car()
{
}

void Car::fillCar()
{
	bool typeNum;

	cout << "enter model car: ";
	cin >> model;
	cout << endl << "enter color: ";
	cin >> color;
	cout << endl << "enter number type(1 - 5 num;0 - 8 chars): ";
	cin >> typeNum;
	cout << endl << "enter number: ";
	if (typeNum) {
		cin >> number.IntNumber;
	}
	else {
		cin >> number.CharNumber;
	}
}

void Car::printCar()
{
	cout << "model: " << model << endl;
	cout << "color: " << color << endl;
	cout << "number: ";
	if (number.CharNumber = nullptr) {
		cout << number.IntNumber << endl;

	}
	else {
		for (int i = 0; i != '/0'; i++) {
			cout << number.CharNumber[i];
		}
		cout << endl;
	}
}

void Car::editCar()
{
	printCar();
    int choiceEdit;
	cout << "enter choice(1 - model 2 - color 3 - number): ";
	cin >> choiceEdit;
	string newStr;

	switch (choiceEdit)
	{
	case 1:
		cin >> newStr;
		setModel(newStr);

	case 2:
		cin >> newStr;
		setColor(newStr);

	case 3:
		setNumber();

	default:
		break;
	}

    
}

void Car::setColor(string color)
{
	this->color = color;
}

void Car::setModel(string model)
{
	this->model = model;
}

void Car::setNumber()
{
	int typeNum;
	cout << endl << "enter number type(1 - 5 num;0 - 8 chars): ";
	cin >> typeNum;
	cout << endl << "enter number: ";
	if (typeNum) {
		cin >> number.IntNumber;
		delete[] number.CharNumber;
	}
	else {
		cin >> number.CharNumber;
		number.CharNumber = 0;
	}
}


Car::~Car()
{
}
