
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#pragma once

using namespace std;

class Pokemon
{
	
	int XP;

	int evolutionLevel;

	int fightingMethod;

public:

	enum PokemonType {
		eAquatic,
		eFire,
		eEarth,
		eElectricity
	};

	PokemonType type;

	virtual char* getName();

	Pokemon(PokemonType pokeType, int evolutionLevel);

	int basicAttack();

	void chooseFightingMethods();
	void PokemonWon();
	void PokemonLost();

	int getFightingMethod() { return fightingMethod; };
	int getXP() { return XP; };
	~Pokemon();
};

#endif