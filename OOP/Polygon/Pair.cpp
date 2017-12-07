#include "Pair.h"



Pair::Pair()
{
	x = 0;
	y = 0;
}

Pair::Pair(int first, int second)
{
	x = first;
	y = second;
}

int Pair::getFirst()
{
	return x;
}

void Pair::setFirst(int first)
{
	x = first;
}

int Pair::getSecond()
{
	return y;
}

void Pair::setSecond(int second)
{
	y = second;
}

double Pair::operator*(Pair* other)
{
	return this->x * other->getFirst() + this->y * other->getSecond();
}

Pair Pair::operator-(Pair* other)
{
	return Pair(this->x - other->getFirst(),this->y - other->getSecond());
}

double Pair::getNorm()
{
	return sqrt((*this) * this);
}


Pair::~Pair()
{
}
