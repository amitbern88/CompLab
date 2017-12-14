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
	mRounds = 1;
	inPlayer1.clearRoundsWon();
	inPlayer2.clearRoundsWon();
	int winType;
	bool moreThan30;
	while (mRounds <= 3)
	{
		cout << "Round: " << mRounds << " Fight!" << endl;
		cout << "Player 1 please Choose Fighting Method: " << endl;
		FightingMethod method1 = inPlayer1.chooseFightingMethods();
		cout << "Player 2 please Choose Fighting Method: " << endl;
		FightingMethod method2 = inPlayer2.chooseFightingMethods();
		winType = getWinningType(inPlayer1.type, inPlayer2.type);
		moreThan30 = XpDiffMoreThan30(inPlayer1, inPlayer2);
		if (winType != 0 && !moreThan30) //Check pokemon family
		{
			if (winType == 1)
				finishRound(1, inPlayer1, inPlayer2);
			else
				finishRound(2, inPlayer2, inPlayer1);
		}
		else if (inPlayer1.getXP() > inPlayer2.getXP()) //XP Superiority
			finishRound(1, inPlayer1, inPlayer2);
		else if (inPlayer1.getXP() < inPlayer2.getXP())
			finishRound(2, inPlayer2, inPlayer1);
		else if (method1.getLvl() > method2.getLvl()) //Player 1 is stronger than 2
			finishRound(1, inPlayer1, inPlayer2);
		else if (method1.getLvl() < method2.getLvl())//Player 2 is stronger than 1
			finishRound(2, inPlayer2, inPlayer1);
		else if (method1.getName() == method2.getName()) //players chose same fighting method
		{
			int randomStart = rand();
			if (randomStart >= 0.5) //Player 1 won the round
				finishRound(1, inPlayer1, inPlayer2);
			else
				finishRound(2, inPlayer2, inPlayer1);
		}
		if (inPlayer1.getRoundsWon() == 2 || inPlayer2.getRoundsWon() == 2) //Which player won 2/3 rounds
		{
		
			if (inPlayer1.getRoundsWon() > inPlayer2.getRoundsWon()) //player 1 won the battle
				return 1;
			else
				return 2;
		}
		if (inPlayer1.getXP() <= 0) //Player 1 lost
			return 2;
		else if (inPlayer2.getXP() <= 0) //Player 2 lost
			return 1;
		cout << "Battle not finished! Press any key to start next round" << endl;
		mRounds++;
		system("pause");
	}
	return 0;
}

int BattleGround::getWinningType(Pokemon::PokemonType type1, Pokemon::PokemonType type2)
{
	if (type1 == Pokemon::PokemonType::eElectricity && type2 == Pokemon::PokemonType::eAquatic)
		return 1;
	if (type1 == Pokemon::PokemonType::eAquatic && type2 == Pokemon::PokemonType::eElectricity)
		return 2;
	
	if (type1 == Pokemon::PokemonType::eAquatic && type2 == Pokemon::PokemonType::eFire)
		return 1;
	if (type1 == Pokemon::PokemonType::eFire && type2 == Pokemon::PokemonType::eAquatic)
		return 2;

	if (type1 == Pokemon::PokemonType::eEarth && type2 == Pokemon::PokemonType::eElectricity)
		return 1;
	if (type1 == Pokemon::PokemonType::eElectricity && type2 == Pokemon::PokemonType::eEarth)
		return 2;

	if (type1 == Pokemon::PokemonType::eFire && type2 == Pokemon::PokemonType::eEarth)
		return 1;
	if (type1 == Pokemon::PokemonType::eEarth && type2 == Pokemon::PokemonType::eFire)
		return 2;

	return 0;
}

bool BattleGround::XpDiffMoreThan30(Pokemon & inPoke1, Pokemon & inPoke2){

	if (abs(inPoke1.getXP() - inPoke2.getXP()) > 30)
		return true;
	return false;
}

void BattleGround::finishRound(int winnerIndex, Pokemon & winner, Pokemon & loser)
{
	int loserIndex = winnerIndex == 1 ? 2 : 1;
	cout << "Player " << winnerIndex << ", congratulations! You won round " << mRounds << "! " << winner.getName() << " +5XP" << endl;
	winner.PokemonWon();
	cout << "Player " << loserIndex << ", too bad, You lost round " << mRounds << ". " << loser.getName() << " -5XP" << endl;
	loser.PokemonLost();
}
