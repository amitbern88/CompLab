#include "Venusaur.h"

Venusaur::Venusaur() : Pokemon(Pokemon::PokemonType::eEarth, 3)
{
	mCanEvolve = false;
	fightingMethods[1] = FightingMethod("Vine Whip", 2);
	fightingMethods[2] = FightingMethod("Seed Bomb", 3);
}

Venusaur::~Venusaur()
{
}

char * Venusaur::getName()
{
	return "Venusaur";
}
