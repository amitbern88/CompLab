#include "Poliwrath.h"

Poliwrath::Poliwrath() : Pokemon(Pokemon::PokemonType::eAquatic, 3)
{
	mCanEvolve = false;
	fightingMethods[1] = FightingMethod("Double Slap", 2);
	fightingMethods[2] = FightingMethod("Hydro Pump", 3);
}

Poliwrath::~Poliwrath()
{
}

char * Poliwrath::getName()
{
	return "Poliwrath";
}

