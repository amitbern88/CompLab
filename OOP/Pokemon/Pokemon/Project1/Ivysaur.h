#pragma once
#include "Bulbasaur.h"
#include "Venusaur.h"
class Ivysaur :
	public Pokemon
{
public:
	Ivysaur(int inXP);

	const char* getName();

	~Ivysaur();

	Pokemon* getEvolution();

};

