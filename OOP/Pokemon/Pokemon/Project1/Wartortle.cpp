#include "Wartortle.h"

Wartortle::Wartortle() : Pokemon(Pokemon::PokemonType::eAquatic, 2)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Water Gun", 2);
}

Wartortle::~Wartortle()
{
}

char * Wartortle::getName()
{
	return "Wartortle";
}

Pokemon * Wartortle::getEvolution()
{
	return new Blastoise;
}
