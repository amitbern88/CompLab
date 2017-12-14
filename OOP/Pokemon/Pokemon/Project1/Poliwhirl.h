#pragma once
#include"Pokemon.h"
#include "Poliwrath.h"
class Poliwhirl :
	public Pokemon
{
public:
	Poliwhirl();
	~Poliwhirl();

	char* getName();
	Pokemon* getEvolution();

};
