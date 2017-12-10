#include "Pokemon.h"



Pokemon::Pokemon(PokemonType pokeType, int evolution) : type(pokeType), evolutionLevel(evolution)
{
	fightingMethods = new FightingMethod[evolution];
	fightingMethods[0] = new FightingMethod("Tackle", 1);
}

int Pokemon::basicAttack()
{
	return 0;
}

FightingMethod* Pokemon::chooseFightingMethods()
{
	int i;
	cout << getName() << " Fighting Methods are: " << endl;
	for (i = 0; i < evolution; i++)
	{
		cout << i << ". " << fightingMethods[i]->getName() << endl;
		cout << "Please choose method: " << endl;
		cin >> fightingMethod;
	}
	if (fightingMethod < evolution)
		return fightingMethods[fightingMethod];	
	
	return nullptr;
}

void Pokemon::PokemonWon() //Raise XP by 5 pts
{
	mXp = mXp + 5;
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
	delete[evolution](fightingMethods);
}
