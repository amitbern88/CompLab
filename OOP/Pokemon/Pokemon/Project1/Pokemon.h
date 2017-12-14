
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include "FightingMethod.h"
#pragma once

using namespace std;
enum PokemonType {
	eAquatic = 0,
	eFire = 1,
	eEarth = 2,
	eElectricity = 3
};
class Pokemon
{
	int roundsWon;
	
protected:
	int mXp;
	int evolutionLevel;
	bool mCanEvolve;
	FightingMethod* fightingMethods;

public:

	PokemonType type;

	virtual char* getName();

	Pokemon(PokemonType pokeType, int evolutionLevel);
	Pokemon(PokemonType pokeType, int evolutionLevel, int inXP);

	int basicAttack();

	FightingMethod chooseFightingMethods();
	
	void PokemonWon();
	
	void PokemonLost();

	int getXP() { return mXp; };
	
	void clearRoundsWon() { roundsWon = 0; };

	void incrementRoundsWon() { roundsWon++; };

	int getRoundsWon() { return roundsWon; };

	bool shouldEvolve();

	virtual Pokemon* getEvolution();
	
	~Pokemon();
};

#endif