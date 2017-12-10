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
		FightingMethod* method1 = inPlayer1.chooseFightingMethods();
		cout << "Player 2 please Choose Fighting Method: " << endl;
		FightingMethod* method2 = inPlayer2.chooseFightingMethods();
		if (method1->getLvl() > method2->getLvl()) //Player 1 is stronger than 2
		{
			inPlayer1.PokemonWon();
			inPlayer2.PokemonLost();
		}
		else if (method1->getLvl() < method2->getLvl())//Player 2 is stronger than 1
		{
			inPlayer1.PokemonLost();
			inPlayer2.PokemonWon();
		}
		else if (method1->getName() == method2->getName()) //players chose same fighting method
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
		if (inPlayer1.getXP() == 0) //Player 1 lost
			return 2;
		else if (inPlayer2.getXP() == 0) //Player 2 lost
			return 1;
	}
}
