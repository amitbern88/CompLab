#include "Graveler.h"

Graveler::Graveler() : Pokemon(Pokemon::PokemonType::eEarth, 2)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Rock Throw", 2);

}

Graveler::~Graveler()
{
}

char * Graveler::getName()
{
	return "Graveler";
}

Pokemon * Graveler::getEvolution()
{
	return new Golem;
}
