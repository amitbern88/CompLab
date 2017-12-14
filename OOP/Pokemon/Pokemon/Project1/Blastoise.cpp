#include "Blastoise.h"

Blastoise::Blastoise(int inXP) : Pokemon(eAquatic, 3, inXP)
{
	mCanEvolve = false;
	fightingMethods[1] = FightingMethod("Water Gun", 2);
	fightingMethods[2] = FightingMethod("Hydro Pump", 3);
}

Blastoise::~Blastoise()
{
}

char * Blastoise::getName()
{
	return "Blastoise";
}

