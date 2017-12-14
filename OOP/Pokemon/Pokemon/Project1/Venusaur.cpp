#include "Venusaur.h"

Venusaur::Venusaur() : Ivysaur(Pokemon::PokemonType::eEarth, 3)
{
	mCanEvolve = false;
	fightingMethods[2] = FightingMethod("Seed Bomb", 3);

}

Venusaur::~Venusaur()
{
}

char * Venusaur::getName()
{
	return "Venusaur";
}