#include "Pikachu.h"

Pikachu::Pikachu(int inXP) : Pokemon(Pokemon::PokemonType::eElectricity, 2, inXP)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Electric Punch", 2);
}

Pikachu::~Pikachu()
{
}

char * Pikachu::getName()
{
	return "Pikachu";
}

Pokemon * Pikachu::getEvolution()
{
	return new Raichu(mXp);
}
