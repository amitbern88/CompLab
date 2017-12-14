#pragma once
#include "Pokemon.h"
#include "Charmeleon.h"

class Charizard :
	public Pokemon
{
public:
	Charizard(int inXP);
	~Charizard();
	char* getName();
};

