#include "Pokemon.h"



Pokemon::Pokemon(PokemonType pokeType, int evolution) : type(pokeType), evolutionLevel(evolution)
{
}

int Pokemon::basicAttack()
{
	return 0;
}

char* Pokemon::getName()
{
	return 0;
}

Pokemon::~Pokemon()
{
}
