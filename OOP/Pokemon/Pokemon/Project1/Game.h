#pragma once
#include "Player.h"
#include "Bulbasaur.h"
#include "Charmander.h"
#include "Squirtel.h"
#include "Pichu.h"
#include "Geodude.h"
#include "Poliwag.h"
#include "BattleGround.h"
#include <ctime>
#include <stdlib.h> 
#include <iostream>

class Game
{
	Player* player1;
	Player* player2;
	
	BattleGround battleground;

	enum Pokemons {
		eBulbasaur,
		eCharmander,
		ePichu,
		eSquirtel,
		eGeodude,
		ePoliwag
	};
public:
	Game();

	void setup();

	void start();

	Pokemon* createPokemon(Pokemons pokemonEnum);

	~Game();

private:
	void printGameSetup();
	
	bool gameIsNotFinished();

	void handleBattleFinish(Player* player, Pokemon* pokemon);
};

