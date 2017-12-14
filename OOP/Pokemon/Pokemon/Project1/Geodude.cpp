#include "Geodude.h"

Geodude::Geodude() : Pokemon(Pokemon::PokemonType::eEarth, 1)
{
	mCanEvolve = true;
}


Geodude::~Geodude()
{
}

char * Geodude::getName()
{
	return "Geodude";
}

Pokemon * Geodude::getEvolution()
{
	return new Graveler;
}
