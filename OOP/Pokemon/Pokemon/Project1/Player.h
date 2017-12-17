#pragma once
#include "Pokemon.h"
#include "PokeList.h"
#include <iostream>


class Player
{
	int index;
	PokeList pokemons;
public:
	Player(int num);

	void receivePokemon(Pokemon* pokemon);

	bool hasLivePokemons();

	void printAvailablePokemons();

	void printStatus();

	void killPokemon(Pokemon* pokemon);

	void evolvePokemon(Pokemon* existing, Pokemon* toEvolve);

	Pokemon* getPokemon(int index);

	int getNumOfPokemons();

	~Player();
};

