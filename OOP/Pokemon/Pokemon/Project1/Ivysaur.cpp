#include "Ivysaur.h"

Ivysaur::Ivysaur(int inXP) : Pokemon(Pokemon::PokemonType::eEarth, 2, inXP)
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
	return new Venusaur(mXp);
}
