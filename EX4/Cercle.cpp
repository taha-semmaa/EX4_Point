#include "Cercle.h"
#include "Point.h"
#include <iostream>
using namespace std;
Cercle::Cercle():centre(Point(2.4,6.5))
{
	this->rayon = 0.0;
}

Cercle::Cercle(Point P, double R) : centre(Point(P))
{
	this->rayon = R;
}

Cercle::Cercle(const Cercle &P) : centre(Point(P.centre))
{
	this->rayon = P.rayon;
}

void Cercle::affiche() const
{
	this->centre.Point::affichage();
	cout << ";(" << this->rayon << ")" << endl;
}

