#include "Poliwhirl.h"

Poliwhirl::Poliwhirl(int inXP) : Pokemon(eAquatic, 2, inXP)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Double Slap", 2);
}

Poliwhirl::~Poliwhirl()
{
}

char * Poliwhirl::getName()
{
	return "Poliwhirl";
}

Pokemon * Poliwhirl::getEvolution()
{
	return new Poliwrath(mXp);
}
