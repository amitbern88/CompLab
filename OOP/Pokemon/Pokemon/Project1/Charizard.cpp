#include "Charizard.h"

Charizard::Charizard() : Charmeleon(Pokemon::PokemonType::eFire, 3)
{
	mCanEvolve = false;
	fightingMethods[2] = FightingMethod("Flame Thrower", 3);
}

Charizard::~Charizard()
{
}

char * Charizard::getName()
{
	return "Charizard";
}
