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
	while (mRounds > 0)
	{
		mRounds--;
		cout << "Player 1 please Choose Fighting Method: " << endl;
		inPlayer1.chooseFightingMethods();
		cout << "Player 2 please Choose Fighting Method: " << endl;
		inPlayer2.chooseFightingMethods();
		if (inPlayer1.getFightingMethod() == inPlayer2.getFightingMethod()) //players chose same fighting method
		{
			int randomStart = rand();
			if (randomStart >= 0.5) //Player 1 won the round
			{
				inPlayer1.PokemonWon();
				inPlayer2.PokemonLost();
			}
			else
			{
				inPlayer1.PokemonLost();
				inPlayer2.PokemonWon();
			}
		}
		if(inPlayer1.getXP() == 0 || inPlayer2.getXP() == 0)

	}
}
