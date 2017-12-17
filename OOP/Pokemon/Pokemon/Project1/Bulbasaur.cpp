#include "Bulbasaur.h"



Bulbasaur::Bulbasaur() : Pokemon(eEarth, 1)
{
}

const char* Bulbasaur::getName()
{
	return "Bulbasaur";
}

Pokemon * Bulbasaur::getEvolution()
{
	return new Ivysaur(mXp);
}

Bulbasaur::~Bulbasaur()
{
}
