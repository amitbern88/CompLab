#include "Raichu.h"

Raichu::Raichu() : Pikachu(Pokemon::PokemonType::eElectricity, 3)
{
	mCanEvolve = false;
	fightingMethods[3] = FightingMethod("Thunder", 3);
}

Raichu::~Raichu()
{
}

char * Raichu::getName()
{
	return "Raichu";
}
