#include "Pichu.h"



Pichu::Pichu() : Pokemon(eElectricity, 1)
{
	mCanEvolve = true;
}

char* Pichu::getName()
{
	return "Pichu";
}

Pokemon * Pichu::getEvolution()
{
	return new Pikachu(mXp);
}

Pichu::~Pichu()
{
}
