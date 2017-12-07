#include "Charmander.h"



Charmander::Charmander() : Pokemon(Pokemon::PokemonType::eFire, 1)
{
}

char* Charmander::getName()
{
	return "Charmander";
}

Charmander::~Charmander()
{
}
