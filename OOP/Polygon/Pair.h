#pragma once
#include <math.h>
class Pair
{
	int x, y;
public:
	Pair();

	Pair(int first, int second);

	int getFirst();

	void setFirst(int first);

	int getSecond();

	void setSecond(int second);

	double operator* (Pair* other);

	Pair operator-(Pair * other);

	double getNorm();

	~Pair();
};

