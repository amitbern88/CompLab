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

	void start();

	~Game();

private:
	inline Pokemon* createPokemon(Pokemons pokemonEnum);
	
	inline void printGameSetup();
	
	inline bool gameIsNotFinished();

	inline void handleBattleFinish(Player* player, Pokemon* pokemon);
};

