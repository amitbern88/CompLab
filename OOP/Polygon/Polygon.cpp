#include "Polygon.h"

Polygon::Polygon()
{
	size = 0;
	coordinates = nullptr;
}

Polygon::Polygon(int a, Pair* verteces)
{
	coordinates = verteces;
	size = a;
}

char * Polygon::getName()
{
	return "Polygon";
}

int Polygon::getNumOfVerteces()
{
	return size;
}

void Polygon::calculatePerimeter()
{
	double perimeter = 0;
	int i;
	for (i = 0; i < size; i++) {
		if (i == (size - 1))
		{
			perimeter += getDist(&coordinates[i], &coordinates[0]);
		}
		else
		{
			perimeter += getDist(&coordinates[i], &coordinates[i + 1]);
		}
	}
	printPerimeter(perimeter);
}

void Polygon::printPerimeter(double perimeter)
{
	cout << "Perimeter of polygon with " << size << " coordinates is : " << perimeter << endl;
}

double Polygon::getDist(Pair* source, Pair* dist)
{
	int dist_x = pow((source->getFirst() - dist->getFirst()), 2);
	int dist_y = pow((source->getSecond() - dist->getSecond()), 2);
	return sqrt(dist_x + dist_y);
}

Pair* Polygon::getVertex(int i)
{
	if (coordinates == nullptr) return nullptr;
	return &coordinates[i];
}

void Polygon::setVertex(int i, int x, int y)
{
	coordinates[i].setFirst(x);
	coordinates[i].setSecond(x);
}

void Polygon::printVerteces()
{
	int i;
	cout << "Verteces: {";
	for (i = 0; i < size; i++)
	{
		cout << "(" << coordinates[i].getFirst() << "," << coordinates[i].getSecond() << ")";
		if (i < size - 1)
			cout << ", ";
		else
			cout << "}" << endl;
	}
}

void Polygon::printAllData()
{
	printVerteces();
	calculatePerimeter();
}


Polygon::~Polygon()
{
	delete[size](coordinates);
}
