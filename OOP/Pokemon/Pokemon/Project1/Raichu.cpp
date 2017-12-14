#include "Raichu.h"

Raichu::Raichu(int inXP) : Pokemon(Pokemon::PokemonType::eElectricity, 3, inXP)
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
