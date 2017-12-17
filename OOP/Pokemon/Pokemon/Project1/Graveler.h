#pragma once
#include "Pokemon.h"
#include "Golem.h"
class Graveler :
	public Pokemon
{
public:
	Graveler(int inXP);

	~Graveler();

	const char* getName();
	Pokemon * getEvolution();

};
