#pragma once
#include "Bulbasaur.h"
class Ivysaur :
	public Pokemon
{
public:
	Ivysaur();
	Ivysaur(PokemonType pokeType, int evolutionLevel);

	char* getName();

	~Ivysaur();

	Pokemon* getEvolution();

};

