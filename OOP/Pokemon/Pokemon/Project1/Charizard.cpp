#include "Charizard.h"

Charizard::Charizard() : Pokemon(Pokemon::PokemonType::eFire, 3)
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
