#include "Charizard.h"

Charizard::Charizard(int inXP) : Pokemon(eFire, 3, inXP)
{
	mCanEvolve = false;
	fightingMethods[1] = FightingMethod("Flame Burst", 2);
	fightingMethods[2] = FightingMethod("Flame Thrower", 3);
}

Charizard::~Charizard()
{
}

char * Charizard::getName()
{
	return "Charizard";
}
