#pragma once
#include "Squirtel.h"
#include "Blastoise.h"
class Wartortle :
	public Pokemon
{
public:
	Wartortle(int inXP);
	~Wartortle();

	const char* getName();

	Pokemon* getEvolution();
};