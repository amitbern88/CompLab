#include "Golem.h"

Golem::Golem(int inXP) : Pokemon(Pokemon::PokemonType::eEarth, 3, inXP)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Rock Throw", 2);
	fightingMethods[2] = FightingMethod("Earthquake", 3);
}

Golem::~Golem()
{
}

char * Golem::getName()
{
	return "Golem";
}
