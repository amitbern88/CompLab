#include "Pokemon.h"
#include <exception>


Pokemon::Pokemon(PokemonType pokeType, int evolution) : type(pokeType), evolutionLevel(evolution)
{
	fightingMethods = new FightingMethod[evolution];
	fightingMethods[0] = FightingMethod("Tackle", 1);
	mXp = 20;
}

int Pokemon::basicAttack()
{
	return 0;
}

FightingMethod Pokemon::chooseFightingMethods()
{
	int i, index;
	cout << getName() << " Fighting Methods are: " << endl;
	for (i = 0; i < evolutionLevel; i++)
	{
		cout << i + 1 << ". " << fightingMethods[i].getName() << endl;
	}
	cout << "Please choose method: " << endl;
	cin >> index;
	if (index <= evolutionLevel)
	{
		mXp = mXp - (index);
		return fightingMethods[index - 1];
	}
	
	//#TODO add exception for wrond input
	throw invalid_argument("index");
}

void Pokemon::PokemonWon() //Raise XP by 5 pts
{
	mXp = mXp + 5;
	roundsWon++;
}

void Pokemon::PokemonLost() //Reduce XP by 5 pts
{
	mXp = mXp - 5;
}

char* Pokemon::getName()
{
	return 0;
}

bool Pokemon::shouldEvolve()
{
	if (mXp >= 50 && mCanEvolve)
		return true;
	return false;
}

Pokemon * Pokemon::getEvolution()
{
	return nullptr;
}

Pokemon::~Pokemon()
{
	delete[evolutionLevel](fightingMethods);
}
