#pragma once
#include "Pokemon.h"
#include "Charizard.h"
class Charmeleon :
	public Pokemon
{
public:
	Charmeleon(int inXP);
	~Charmeleon();
	const char* getName();
	Pokemon* getEvolution();
};
