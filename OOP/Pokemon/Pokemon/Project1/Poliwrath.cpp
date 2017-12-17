#include "Poliwrath.h"

Poliwrath::Poliwrath(int inXP) : Pokemon(eAquatic, 3, inXP)
{
	mCanEvolve = false;
	fightingMethods[1] = FightingMethod("Double Slap", 2);
	fightingMethods[2] = FightingMethod("Hydro Pump", 3);
}

Poliwrath::~Poliwrath()
{
}

const char * Poliwrath::getName()
{
	return "Poliwrath";
}

