#include "Pikachu.h"



Pikachu::Pikachu() : Pokemon(Pokemon::PokemonType::eElectricity, 1)
{
}

char* Pikachu::getName()
{
	return "Pikachu";
}

Pikachu::~Pikachu()
{
}
