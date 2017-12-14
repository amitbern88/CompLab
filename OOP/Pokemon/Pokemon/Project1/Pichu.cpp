#include "Pichu.h"



Pichu::Pichu() : Pokemon(Pokemon::PokemonType::eElectricity, 1)
{
	mCanEvolve = true;
}

Pichu::Pichu(PokemonType pokeType, int evolutionLevel) : Pokemon(pokeType, evolutionLevel)
{
}

char* Pichu::getName()
{
	return "Pichu";
}

Pokemon * Pichu::getEvolution()
{
	return new Pikachu;
}

Pichu::~Pichu()
{
}
