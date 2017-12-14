#pragma once
#include "Pokemon.h"
#include "Charmeleon.h"
class Charmander :
	public Pokemon
{
public:
	Charmander();
	~Charmander();

	char* getName();
	Pokemon* getEvolution();
};

