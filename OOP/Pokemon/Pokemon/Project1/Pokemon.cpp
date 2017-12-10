#include "Pokemon.h"



Pokemon::Pokemon(PokemonType pokeType, int evolution) : type(pokeType), evolutionLevel(evolution)
{
}

int Pokemon::basicAttack()
{
	return 0;
}

void Pokemon::printFightingMethods()
{
	cout << getName() << " Fighting Methods are: " << endl;
}

char* Pokemon::getName()
{
	return 0;
}

int Pokemon::getXp()
{
	return mXp;
}

bool Pokemon::shouldEvolve()
{
	return mXp >= 50;
}

Pokemon * Pokemon::evolve()
{
	return nullptr;
}

Pokemon::~Pokemon()
{
}
