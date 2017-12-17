
#ifndef BATTLEGROUND_H
#define BATTLEGOUND_H

#include <cmath>
#include <iostream>
#include <ctime>
#include <stdlib.h> 
#include "Pokemon.h"
#include "Player.h"

using namespace std;

class BattleGround
{
public:
	BattleGround();
	~BattleGround();

	int battle(Pokemon& inPlayer1, Pokemon& inPlayer2);

private:
	int mRounds;

	inline int getWinningType(PokemonType type1, PokemonType type2);
	inline bool XpDiffMoreThan30(Pokemon& inXp1, Pokemon& inXp2);
	inline void finishRound(int winnerIndex, Pokemon & winner, Pokemon & loser);
};


#endif // !BATTLEGROUND_H