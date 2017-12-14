#pragma once
#include "Pokemon.h"
#include "Pikachu.h"
class Pichu :
	public Pokemon
{
public:
	Pichu();

	~Pichu();

	char * getName();

	Pokemon* getEvolution();
};
