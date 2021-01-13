#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;
/*Point::Point()
{
	cout << "constructeur sans parametre" << endl;
	this->x = 0.0;
	this->y = 0.0;
}*/

Point::Point(double x, double y)
{
	cout << "constructeur avec parametre" << endl;
	this->x = x;
	this->y = y;
}

Point::Point(const Point& P)
{
	cout << "constructeur de rocopie" << endl;
	this->x = P.x;
	this->y = P.y;
}

void Point::affichage()const
{
	cout << "(" << this->x << ";" << this->y << ")" ;
}

double Point::distance(const Point& P) const
{
	double D;
	D = sqrt(pow(P.x - this->x, 2) + pow(P.y - this->y, 2));
	return D;
}

Point& Point::operator=(const Point& P)
{
	if (this != &P)
	{
		this->x = P.x;
		this->y = P.y;
	}
	return *this;
}
