#include "Pichu.h"



Pichu::Pichu() : Pokemon(eElectricity, 1)
{
	mCanEvolve = true;
}

const char* Pichu::getName()
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
