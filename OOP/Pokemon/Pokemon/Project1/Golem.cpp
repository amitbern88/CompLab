#include "Golem.h"

Golem::Golem(int inXP) : Pokemon(eEarth, 3, inXP)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Rock Throw", 2);
	fightingMethods[2] = FightingMethod("Earthquake", 3);
}

Golem::~Golem()
{
}

const char * Golem::getName()
{
	return "Golem";
}
