#pragma once
#include "Pichu.h"
#include "Raichu.h"
class Pikachu :
	public Pokemon
{
public:
	Pikachu();
	Pikachu(PokemonType pokeType, int evolutionLevel);

	~Pikachu();

	char* getName();

	Pokemon* getEvolution();
};

