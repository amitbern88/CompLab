#pragma once
#include "Pokemon.h"
#include "Golem.h"
class Graveler :
	public Pokemon
{
public:
	Graveler(int inXP);

	~Graveler();

	char* getName();
	Pokemon * getEvolution();

};
