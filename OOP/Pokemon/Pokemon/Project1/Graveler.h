#pragma once
#include "Pokemon.h"
#include "Golem.h"
class Graveler :
	public Pokemon
{
public:
	Graveler();

	~Graveler();

	char* getName();
	Pokemon * getEvolution();

};
