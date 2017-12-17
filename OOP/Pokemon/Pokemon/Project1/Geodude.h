#pragma once
#include "Pokemon.h"
#include "Graveler.h"

class Geodude :
	public Pokemon
{
public:
	Geodude();

	~Geodude();

	const char* getName();
	Pokemon* getEvolution();


};