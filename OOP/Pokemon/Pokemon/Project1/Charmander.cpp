#include "Charmander.h"

Charmander::Charmander() : Pokemon(eFire, 1)
{
	mCanEvolve = true;
}

char* Charmander::getName()
{
	return "Charmander";
}

Pokemon * Charmander::getEvolution()
{
	return new Charmeleon(mXp);
}

Charmander::~Charmander()
{
}
