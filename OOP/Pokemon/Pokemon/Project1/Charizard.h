#pragma once
#include "Pokemon.h"
#include "Charmeleon.h"

class Charizard :
	public Pokemon
{
public:
	Charizard(int inXP);
	~Charizard();
	const char* getName();
};

