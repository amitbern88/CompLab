#ifndef POLYGON_H
#define POLYGON_H
#include "Pair.h"
#include <iostream>

using namespace std;

class Polygon
{
	int size;
	Pair* coordinates;

public:
	Polygon();

	Polygon(int a, Pair* verteces);

	virtual char* getName();

	int getNumOfVerteces();

	void calculatePerimeter();

	virtual void printPerimeter(double perimeter);

	double getDist(Pair* source, Pair* dist);

	Pair* getVertex(int i);

	void setVertex(int i, int x, int y);

	void printVerteces();

	virtual void printAllData();

	~Polygon();
};

#endif