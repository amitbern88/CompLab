#pragma once
#include "Pokemon.h"
#include "Wartortle.h"
class Squirtel :
	public Pokemon
{
public:
	Squirtel();
	~Squirtel();
	char* getName();
	Pokemon* getEvolution();
	
};