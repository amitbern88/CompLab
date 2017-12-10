#pragma once
#include "Player.h"
#include "Bulbasaur.h"
#include "Charmander.h"
#include <ctime>
#include <stdlib.h> 
#include <iostream>

class Game
{
	Player* player1;
	Player* player2;

	enum Pokemons {
		eBulbasaur,
		eCharmander
	};
public:
	Game();

	void setup();

	void start();

	Pokemon* createPokemon(Pokemons pokemonEnum);

	void handlePokemonXpAfterBattle(Player* player, Pokemon* pokemon);

	~Game();

private:
	bool gameIsNotFinished();
};

