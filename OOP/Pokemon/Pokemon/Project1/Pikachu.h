#pragma once
#include "Pichu.h"
#include "Raichu.h"
class Pikachu :
	public Pokemon
{
public:
	Pikachu(int inXP);
	~Pikachu();

	const char* getName();

	Pokemon* getEvolution();
};

