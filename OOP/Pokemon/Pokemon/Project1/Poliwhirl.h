#pragma once
#include"Pokemon.h"
#include "Poliwrath.h"
class Poliwhirl :
	public Pokemon
{
public:
	Poliwhirl(int inXP);
	~Poliwhirl();

	const char* getName();
	Pokemon* getEvolution();

};
