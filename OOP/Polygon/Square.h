#pragma once
#include "Polygon.h"
class Square :
	public Polygon
{
public:
	Square(Pair* verteces);

	char* getName();

	void printPerimeter(double perimeter);

	double calculateArea();

	void printAllData();

	~Square();
};

