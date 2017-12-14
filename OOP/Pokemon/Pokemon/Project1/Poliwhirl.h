#pragma once
#include"Pokemon.h"
#include "Poliwrath.h"
class Poliwhirl :
	public Pokemon
{
public:
	Poliwhirl(int inXP);
	~Poliwhirl();

	char* getName();
	Pokemon* getEvolution();

};
