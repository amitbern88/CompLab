#include "Graveler.h"

Graveler::Graveler(int inXP) : Pokemon(eEarth, 2, inXP)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Rock Throw", 2);

}

Graveler::~Graveler()
{
}

const char * Graveler::getName()
{
	return "Graveler";
}

Pokemon * Graveler::getEvolution()
{
	return new Golem(mXp);
}
