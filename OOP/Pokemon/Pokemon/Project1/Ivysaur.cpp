#include "Ivysaur.h"



Ivysaur::Ivysaur() : Pokemon(Pokemon::PokemonType::eEarth, 2)
{
	mCanEvolve = true;
}

char* Ivysaur::getName()
{
	return "Ivysaur";
}

Ivysaur::~Ivysaur()
{
}
