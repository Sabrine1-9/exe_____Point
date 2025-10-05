#include "Point.h"
#include <cmath>
using namespace std;
#include<iostream>;
Point::Point(float x, float y)
{
	this->x1 = x;
	this->x2 = y;
}

float Point::distance(Point a)
{
	float c = this->x1 - a.x1;
	float b = this->x2 - a.x2;

	return sqrt(c * c + b * b);
}

void Point::afficher()
{
	cout << "(" << this->x1 << "," << this->x2 << ")" << endl;
}
