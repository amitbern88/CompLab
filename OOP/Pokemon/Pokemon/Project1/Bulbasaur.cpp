#include "Bulbasaur.h"



Bulbasaur::Bulbasaur() : Pokemon(Pokemon::PokemonType::eEarth, 1)
{
}

char* Bulbasaur::getName()
{
	return "Bulbasaur";
}

Pokemon * Bulbasaur::getEvolution()
{
	return new Ivysaur;
}

Bulbasaur::~Bulbasaur()
{
}
