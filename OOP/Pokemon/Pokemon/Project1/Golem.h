#pragma once
#include "Pokemon.h"

class Golem :
	public Pokemon
{
public:
	Golem(int inXP);

	~Golem();

	const char* getName();
};