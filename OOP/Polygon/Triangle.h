#pragma once
#include "Polygon.h"
#include "Pair.h"

using namespace std;

class Triangle :
	public Polygon
{
public:
	Triangle(Pair* verteces);

	char* getName();

	void printPerimeter(double perimeter);

	void calculateAngles();

	void printAllData();
	
	~Triangle();
};

