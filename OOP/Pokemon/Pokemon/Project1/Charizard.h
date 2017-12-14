#pragma once
#include "Pokemon.h"
#include "Charmeleon.h"

class Charizard :
	public Charmeleon
{
public:
	Charizard();
	~Charizard();
	char* getName();
};

