#pragma once
#include "Bulbasaur.h"
class Ivysaur :
	public Pokemon
{
public:
	Ivysaur();

	char* getName();

	~Ivysaur();

	Pokemon* getEvolution();

};

