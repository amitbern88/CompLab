#include "Blastoise.h"

Blastoise::Blastoise() : Pokemon(Pokemon::PokemonType::eAquatic, 3)
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

