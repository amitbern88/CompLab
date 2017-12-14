#include "Charmeleon.h"

Charmeleon::Charmeleon() : Pokemon(Pokemon::PokemonType::eFire, 2)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Flame Burst", 2);
}

Charmeleon::Charmeleon(PokemonType pokeType, int evolutionLevel) : Pokemon(pokeType, evolutionLevel)
{
	fightingMethods[1] = FightingMethod("Flame Burst", 2);
}


Charmeleon::~Charmeleon()
{
}

char * Charmeleon::getName()
{
	return "Charmeleon";
}

Pokemon * Charmeleon::getEvolution()
{
	return new Charizard;
}
