#include "Pokemon.h"



Pokemon::Pokemon(PokemonType pokeType, int evolution) : type(pokeType), evolutionLevel(evolution)
{
}

int Pokemon::basicAttack()
{
	return 0;
}

void Pokemon::printFightingMethods(Pokemon& inPoke)
{
	cout << inPoke.getName() << " Fighting Methods are: " << endl;
}

char* Pokemon::getName()
{
	return 0;
}

Pokemon::~Pokemon()
{
}
