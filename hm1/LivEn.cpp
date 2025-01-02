#include "LivEn.h"

LivEn::LivEn()
{
}

void LivEn::fillLivEn(){
	cout << "enter int speed, string type, string color, string feature: ";
	cin >> speed >> type >> color >> feature;
}

void LivEn::printObj(){
	cout << "Obj: " << endl;
	cout << "speed: " << speed << " " << "type: " << type << " " << "color: " << color << " " << "feature: " << feature;
}

void LivEn::editLivEn(){
	cout << "edit Obj:" << endl;
	int newSpeed;
	string newType;
	string newColor;
	string newFeature;
	cout << "speed: ";
	cin >> newSpeed;
	cout << endl << "type: ";
	cin >> newType;
	cout << endl << "color: ";
	cin >> newColor;
	cout << endl << "feature: ";
	cin >> newFeature;

	speed = newSpeed;
	type = newType;
	color = newColor;
	feature = newFeature;
}

LivEn::~LivEn()
{
}
