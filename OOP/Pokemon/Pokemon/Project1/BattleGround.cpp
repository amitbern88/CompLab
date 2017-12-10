#include "BattleGround.h"

BattleGround::BattleGround()
{
	mRounds = 3; 
}

BattleGround::~BattleGround()
{
}

int BattleGround::battle(Pokemon & inPlayer1, Pokemon & inPlayer2)
{
	while (mRounds >= 0)
	{
		cout << "Player 1 please Choose Fighting Method: " << endl;
		Pokemon.printFightingMethods();
	}
}
