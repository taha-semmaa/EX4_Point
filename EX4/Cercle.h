#pragma once
#include "Point.h"
#include <iostream>
class Cercle
{
private:
	Point centre;
	double rayon;
public:
	Cercle();
	Cercle(Point, double);
	Cercle(const Cercle&);
	void affiche()const;

};

