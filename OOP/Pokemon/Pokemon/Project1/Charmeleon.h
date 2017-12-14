#pragma once
#include "Pokemon.h"
#include "Charizard.h"
class Charmeleon :
	public Pokemon
{
public:
	Charmeleon();
	Charmeleon(PokemonType pokeType, int evolutionLevel);
	~Charmeleon();
	char* getName();
	Pokemon* getEvolution();
};
