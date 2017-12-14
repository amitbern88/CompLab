#include "Graveler.h"

Graveler::Graveler(int inXP) : Pokemon(Pokemon::PokemonType::eEarth, 2, inXP)
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
	return new Golem(mXp);
}
