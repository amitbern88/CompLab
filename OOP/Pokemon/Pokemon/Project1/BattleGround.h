
#ifndef BATTLEGROUND_H
#define BATTLEGOUND_H

#include <iostream>
#include <ctime>
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
	int getWinningType(PokemonType type1, PokemonType type2);
	bool XpDiffMoreThan30(Pokemon& inXp1, Pokemon& inXp2);
	void finishRound(int winnerIndex, Pokemon & winner, Pokemon & loser);
};


#endif // !BATTLEGROUND_H