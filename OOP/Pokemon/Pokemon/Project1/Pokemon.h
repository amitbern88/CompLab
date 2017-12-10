
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#pragma once

using namespace std;

class Pokemon
{
	
	int mXp;

	int evolutionLevel;

public:

	enum PokemonType {
		eAquatic,
		eFire,
		eEarth,
		eElectricity
	};

	PokemonType type;

	Pokemon(PokemonType pokeType, int evolutionLevel);
	
	virtual char* getName();

	int getXp();

	bool shouldEvolve();

	Pokemon* evolve();

	int basicAttack();

	void printFightingMethods();

	~Pokemon();
};

#endif