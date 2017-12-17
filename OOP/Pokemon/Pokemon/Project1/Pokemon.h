#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <stdlib.h>
#include "FightingMethod.h"

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

	virtual const char* getName();

	Pokemon(PokemonType pokeType, int evolutionLevel);
	Pokemon(PokemonType pokeType, int evolutionLevel, int inXP);
	virtual ~Pokemon();

	int basicAttack();

	FightingMethod chooseFightingMethods();
	
	void PokemonWon();
	
	void PokemonLost();

	int getXP() { return mXp; };
	
	void clearRoundsWon();

	void incrementRoundsWon();

	int getRoundsWon();

	bool shouldEvolve();

	virtual Pokemon* getEvolution();
};

#endif