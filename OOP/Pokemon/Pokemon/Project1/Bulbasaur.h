#pragma once
#include "Pokemon.h"
#include "Ivysaur.h"
class Bulbasaur :
	public Pokemon
{
public:
	Bulbasaur();

	~Bulbasaur();

	char* getName();

	Pokemon* getEvolution();

};

