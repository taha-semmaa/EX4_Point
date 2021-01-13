#pragma once
class Point
{
private:
	double x;
	double y;
public:
	//Point();
	Point(double, double);
	Point(const Point&);
	void affichage()const;
	double distance(const Point&)const;
	Point& operator=(const Point&);

};

