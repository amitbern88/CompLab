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

	enum Pokemons {
		eBulbasaur = 0,
		eCharmander = 1,
		ePichu = 2,
		eSquirtel = 3,
		eGeodude = 4,
		ePoliwag = 5
	};
class Game
{
	Player* player1;
	Player* player2;
	
	BattleGround battleground;



	Pokemons pokeList;
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

