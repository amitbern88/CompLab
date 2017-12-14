#pragma once
#include "Bulbasaur.h"
#include "Venusaur.h"
class Ivysaur :
	public Pokemon
{
public:
	Ivysaur();

	char* getName();

	~Ivysaur();

	Pokemon* getEvolution();

};

