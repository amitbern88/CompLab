
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include "FightingMethod.h"
#pragma once

using namespace std;

class Pokemon
{
	
	int mXp;

	int evolutionLevel;
	int roundsWon;
	FightingMethod* fightingMethods;

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

	FightingMethod chooseFightingMethods();
	
	void PokemonWon();
	
	void PokemonLost();

	int getXP() { return mXp; };
	void clearRoundsWon() { roundsWon = 0; };
	int getRoundsWon() { return roundsWon; };
	
	~Pokemon();
};

#endif