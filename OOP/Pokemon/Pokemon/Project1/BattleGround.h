
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
};


#endif // !BATTLEGROUND_H