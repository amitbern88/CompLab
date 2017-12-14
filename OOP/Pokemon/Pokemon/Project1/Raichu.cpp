#include "Raichu.h"

Raichu::Raichu() : Pokemon(Pokemon::PokemonType::eElectricity, 3)
{
	mCanEvolve = false;
	fightingMethods[1] = FightingMethod("Electric Punch", 2);
	fightingMethods[2] = FightingMethod("Thunder", 3);
}

Raichu::~Raichu()
{
}

char * Raichu::getName()
{
	return "Raichu";
}
