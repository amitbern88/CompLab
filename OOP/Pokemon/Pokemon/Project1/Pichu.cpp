#include "Pichu.h"



Pichu::Pichu() : Pokemon(Pokemon::PokemonType::eElectricity, 1)
{
}

char* Pichu::getName()
{
	return "Pichu";
}

Pichu::~Pichu()
{
}
