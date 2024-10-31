#include "Worker.h"

Worker::Worker(string name, string lastname, string fathername, string should, int yearAdmis, int salary)
{
	this->name = name;
	this->lastname = lastname;
	this->fathername = fathername;
	this->should = should;
	this->yearAdmis = yearAdmis;
	this->salary = salary;
}

void Worker::showWorker()
{
	cout << "name: " << name << endl << "lastname: " << lastname << endl << "fathername: " << fathername << endl << "should: " << should << endl << "years admission: " << yearAdmis << endl << "salary: " << salary;
	cout << endl;
}

int Worker::getYears()
{
	return yearAdmis;
}

int Worker::getSalary()
{
	return salary;
}

string Worker::getName()
{
	return name;
}

string Worker::getLastName()
{
	return lastname;
}

string Worker::getFathername()
{
	return fathername;
}

string Worker::getShould()
{
	return should;
}




Worker::~Worker()
{
}
