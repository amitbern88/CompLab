#pragma once
#include "Pokemon.h"
#include "Wartortle.h"
class Squirtel :
	public Pokemon
{
public:
	Squirtel();
	~Squirtel();
	const char* getName();
	Pokemon* getEvolution();
	
};