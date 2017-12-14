#pragma once
#include "Pokemon.h"
#include "Graveler.h"

class Geodude :
	public Pokemon
{
public:
	Geodude();

	~Geodude();

	char* getName();
	Pokemon* getEvolution();


};