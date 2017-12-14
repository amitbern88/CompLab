#include "Venusaur.h"

Venusaur::Venusaur() : Pokemon(Pokemon::PokemonType::eEarth, 3)
{
	mCanEvolve = false;
}

Venusaur::~Venusaur()
{
}

char * Venusaur::getName()
{
	return "Venusaur";
}
