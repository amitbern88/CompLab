#include "Charmander.h"



Charmander::Charmander() : Pokemon(Pokemon::PokemonType::eFire, 1)
{
	mCanEvolve = true;
}

char* Charmander::getName()
{
	return "Charmander";
}

Charmander::~Charmander()
{
}
