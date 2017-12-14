#include "Squirtel.h"



Squirtel::Squirtel() : Pokemon(Pokemon::PokemonType::eAquatic, 1)
{
	mCanEvolve = true;
}

char* Squirtel::getName()
{
	return "Squirtel";
}

Pokemon * Squirtel::getEvolution()
{
	return new Wartortle(mXp);
}

Squirtel::~Squirtel()
{
}
