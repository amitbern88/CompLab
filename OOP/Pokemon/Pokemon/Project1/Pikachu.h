#pragma once
#include "Pichu.h"
#include "Raichu.h"
class Pikachu :
	public Pichu
{
public:
	Pikachu();
	Pikachu(PokemonType pokeType, int evolutionLevel);

	~Pikachu();

	char* getName();

	Pokemon* getEvolution();
};

