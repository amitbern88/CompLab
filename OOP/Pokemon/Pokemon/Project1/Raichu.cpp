#include "Raichu.h"

Raichu::Raichu() : Pokemon(Pokemon::PokemonType::eElectricity, 3)
{
	mCanEvolve = false;
}

Raichu::~Raichu()
{
}

char * Raichu::getName()
{
	return "Raichu";
}
