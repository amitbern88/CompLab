#include "Ivysaur.h"



Ivysaur::Ivysaur() : Pokemon(Pokemon::PokemonType::eEarth, 2)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Vine Whip", 2);

}

char* Ivysaur::getName()
{
	return "Ivysaur";
}

Ivysaur::~Ivysaur()
{
}

Pokemon * Ivysaur::getEvolution()
{
	return new Venusaur;
}
