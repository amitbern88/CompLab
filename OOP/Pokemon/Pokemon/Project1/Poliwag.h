#pragma once
#include "Pokemon.h"
#include "Poliwhirl.h"
class Poliwag :
	public Pokemon
{
public:
	Poliwag();
	~Poliwag();

	const char* getName();
	Pokemon* getEvolution();

};
