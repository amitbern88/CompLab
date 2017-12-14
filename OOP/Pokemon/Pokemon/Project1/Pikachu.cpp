#include "Pikachu.h"

Pikachu::Pikachu() : Pokemon(Pokemon::PokemonType::eElectricity, 2)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Electric Punch", 2);
}

Pikachu::Pikachu(PokemonType pokeType, int evolutionLevel) : Pokemon(pokeType, evolutionLevel)
{
	fightingMethods[1] = FightingMethod("Electric Punch", 2);
}

Pikachu::~Pikachu()
{
}

char * Pikachu::getName()
{
	return "Pikachu";
}

Pokemon * Pikachu::getEvolution()
{
	return new Raichu;
}
