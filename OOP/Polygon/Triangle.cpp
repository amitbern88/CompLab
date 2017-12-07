#include "Triangle.h"



Triangle::Triangle(Pair* verteces) : Polygon(3, verteces)
{
}

char * Triangle::getName()
{
	return "Triangle";
}

void Triangle::printPerimeter(double perimeter)
{
	cout << "Perimeter of Triangle is " << perimeter << endl;
}

double getAngle(Pair& sela1, Pair& sela2)
{
	double mone = 0, mehane = 0;
	double pi = atan(1) * 4;
	mone = sela1 * &sela2;
	mehane = sela1.getNorm() * sela2.getNorm();

	double angle = acos(mone / mehane);
	if (angle > pi)
		angle = pi - angle;
	return angle * 180 / pi;
}

void Triangle::calculateAngles()
{
	double angle1 = 0, angle2 = 0;
	Pair sela1 = (*getVertex(1)) - getVertex(0);
	Pair sela2 = (*getVertex(2)) - getVertex(0);
	angle1 = getAngle(sela1, sela2);

	sela1 = (*getVertex(0)) - getVertex(1);
	sela2 = (*getVertex(2)) - getVertex(1);
	angle2 = getAngle(sela1, sela2);
	cout << "Angles of the Triangle: " << angle1 << ", " << angle2 << ", " << 180 - angle1 - angle2 << endl;
}

void Triangle::printAllData()
{
	Polygon::printAllData();
	calculateAngles();
}

Triangle::~Triangle()
{
}


