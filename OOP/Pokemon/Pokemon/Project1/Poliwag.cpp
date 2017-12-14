#include "Poliwag.h"

Poliwag::Poliwag() : Pokemon(Pokemon::PokemonType::eAquatic, 1)
{
	mCanEvolve = true;
}

Poliwag::~Poliwag()
{
}

char * Poliwag::getName()
{
	return "Poliwag";
}

Pokemon * Poliwag::getEvolution()
{
	return new Poliwhirl;
}
