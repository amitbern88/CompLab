#pragma once
#include "Pichu.h"
#include "Raichu.h"
class Pikachu :
	public Pokemon
{
public:
	Pikachu();

	~Pikachu();

	char* getName();

	Pokemon* getEvolution();
};

