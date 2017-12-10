#include "Pokemon.h"



Pokemon::Pokemon(PokemonType pokeType, int evolution) : type(pokeType), evolutionLevel(evolution)
{
	fightingMethods = new FightingMethod[evolution];
	fightingMethods[0] = FightingMethod("Tackle", 1);
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
		cout << i << ". " << fightingMethods[i].getName() << endl;
	}
	cout << "Please choose method: " << endl;
	cin >> index;
	if (index < evolutionLevel)
		return fightingMethods[index];	
	
	//#TODO add exception for wrond input
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

Pokemon::~Pokemon()
{
	delete[evolutionLevel](fightingMethods);
}
