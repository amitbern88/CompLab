#pragma once
#include"Pokemon.h"
class Poliwrath :
	public Pokemon
{
public:
	Poliwrath(int inXP);
	~Poliwrath();

	char* getName();
};
