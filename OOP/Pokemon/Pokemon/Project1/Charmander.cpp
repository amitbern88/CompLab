#include "Charmander.h"

Charmander::Charmander() : Pokemon(Pokemon::PokemonType::eFire, 1)
{
	mCanEvolve = true;
}

char* Charmander::getName()
{
	return "Charmander";
}

Pokemon * Charmander::getEvolution()
{
	return new Charmeleon;
}

Charmander::~Charmander()
{
}
