#include "Wartortle.h"

Wartortle::Wartortle(int inXP) : Pokemon(eAquatic, 2, inXP)
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
	return new Blastoise(mXp);
}
