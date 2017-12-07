#include "Square.h"


Square::Square(Pair* verteces) : Polygon(4, verteces)
{
}

char * Square::getName()
{
	return "Square";
}

void Square::printPerimeter(double perimeter)
{
	cout << "Perimeter of Square is: " << perimeter << endl;
}

double Square::calculateArea()
{
	double area = 0;
	Pair sela1 = (*getVertex(1)) - getVertex(0);
	Pair sela2 = (*getVertex(2) - getVertex(1));
	area = abs(sela1.getNorm() * sela2.getNorm());
	cout << "Area of square is: " << area << endl;
	return area;
}

void Square::printAllData()
{
	Polygon::printAllData();
	calculateArea();
}


Square::~Square()
{
}
