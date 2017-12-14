#include "Poliwhirl.h"

Poliwhirl::Poliwhirl() : Pokemon(Pokemon::PokemonType::eAquatic, 2)
{
	mCanEvolve = true;
	fightingMethods[1] = FightingMethod("Double Slap", 2);
}

Poliwhirl::~Poliwhirl()
{
}

char * Poliwhirl::getName()
{
	return "Poliwhirl";
}

Pokemon * Poliwhirl::getEvolution()
{
	return new Poliwrath;
}
