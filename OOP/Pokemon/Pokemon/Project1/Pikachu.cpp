#include "Pikachu.h"

Pikachu::Pikachu() : Pokemon(Pokemon::PokemonType::eElectricity, 2)
{
	mCanEvolve = true;
}

Pikachu::~Pikachu()
{
}

char * Pikachu::getName()
{
	return "Pikachu";
}

Pokemon * Pikachu::getEvolution()
{
	return new Raichu;
}
