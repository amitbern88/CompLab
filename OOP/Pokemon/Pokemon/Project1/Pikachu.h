#pragma once
#include "Pichu.h"
#include "Raichu.h"
class Pikachu :
	public Pokemon
{
public:
	Pikachu(int inXP);
	~Pikachu();

	char* getName();

	Pokemon* getEvolution();
};

