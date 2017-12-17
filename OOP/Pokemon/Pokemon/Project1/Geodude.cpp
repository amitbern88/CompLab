#include "Geodude.h"

Geodude::Geodude() : Pokemon(eEarth, 1)
{
	mCanEvolve = true;
}


Geodude::~Geodude()
{
}

const char * Geodude::getName()
{
	return "Geodude";
}

Pokemon * Geodude::getEvolution()
{
	return new Graveler(mXp);
}
