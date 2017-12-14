#pragma once
#include "Pokemon.h"
#include "PokeList.h"

class Player
{
	int index;
	PokeList pokemons;
public:
	Player(int num);

	void initPlayer();

	void receivePokemon(Pokemon* pokemon);

	bool hasLivePokemons();

	void printAvailablePokemons();

	void printStatus();

	Pokemon* getPokemon(int index);

	~Player();
};

