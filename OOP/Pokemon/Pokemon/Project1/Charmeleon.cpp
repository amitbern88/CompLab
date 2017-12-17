#include "Charmeleon.h"

Charmeleon::Charmeleon(int inXP) : Pokemon(eFire, 2, inXP)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Flame Burst", 2);
}


Charmeleon::~Charmeleon()
{
}

const char * Charmeleon::getName()
{
	return "Charmeleon";
}

Pokemon * Charmeleon::getEvolution()
{
	return new Charizard(mXp);
}
