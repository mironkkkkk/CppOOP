#include "Point.h"

Point::Point()
{
}

Point::Point(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

int Point::getX(int x)
{
    return x;
}

void Point::setX(int x)
{
    this->x = x;
}

int Point::getY(int y)
{
    return y;
}

void Point::setY(int y)
{
    this->y = y;
}

int Point::getZ(int z)
{
    return z;
}

void Point::setZ(int z)
{
    this->z = z;
}

void Point::print(int, int, int)
{
    cout << "x: " << x << endl << "y: " << y << endl << "z: " << z;
}

void Point::save(string nameFile)
{
    string line;
    ofstream out(nameFile);
    if (out.is_open()) {
        out << x << " " << y << " " << z;
    }
    out.close();
}

void Point::load(string nameFile)
{
    string line;
    ifstream in(nameFile);
    if (in.is_open()) {
        in >> x >> y >> z;
        this->x = x;
        this->y = y;
        this->z = z;
    }
    in.close();
}



Point::~Point()
{
}
