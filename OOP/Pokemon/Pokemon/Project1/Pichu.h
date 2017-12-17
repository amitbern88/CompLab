#pragma once
#include "Pokemon.h"
#include "Pikachu.h"
class Pichu :
	public Pokemon
{
public:
	Pichu();
	~Pichu();

	const char * getName();

	Pokemon* getEvolution();
};
