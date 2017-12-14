#pragma once
#include "Squirtel.h"
#include "Blastoise.h"
class Wartortle :
	public Pokemon
{
public:
	Wartortle();
	~Wartortle();

	char* getName();

	Pokemon* getEvolution();
};