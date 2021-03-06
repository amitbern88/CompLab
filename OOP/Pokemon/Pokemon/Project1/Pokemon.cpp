#include "Pokemon.h"

Pokemon::Pokemon(PokemonType pokeType, int evolutionLevel) : evolutionLevel(evolutionLevel), type(pokeType)
{
	fightingMethods = new FightingMethod[evolutionLevel];
	fightingMethods[0] = FightingMethod("Tackle", 1);
	mXp = 20;
}

Pokemon::Pokemon(PokemonType pokeType, int evolutionLevel, int inXP) : evolutionLevel(evolutionLevel), type(pokeType)
{
	fightingMethods = new FightingMethod[evolutionLevel];
	fightingMethods[0] = FightingMethod("Tackle", 1);
	mXp = inXP;
}

int Pokemon::basicAttack()
{
	return 0;
}

FightingMethod Pokemon::chooseFightingMethods()
{
	int i, index;
	cout << getName() << "'s Fighting Methods are: " << endl;
	for (i = 0; i < evolutionLevel; i++)
	{
		cout << i + 1 << ". " << fightingMethods[i].getName() << endl;
	}
	index = rand() % i;
	mXp = mXp - (index);
	return fightingMethods[index - 1];
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

void Pokemon::clearRoundsWon()
{
	roundsWon = 0;
}

void Pokemon::incrementRoundsWon()
{
	roundsWon++;
}

int Pokemon::getRoundsWon()
{
	return roundsWon;
}

const char* Pokemon::getName()
{
	return 0;
}

bool Pokemon::shouldEvolve()
{
	if ((mXp >= (50 * evolutionLevel)) && mCanEvolve)
		return true;
	return false;
}

Pokemon * Pokemon::getEvolution()
{
	return NULL;
}

Pokemon::~Pokemon()
{
	delete[](fightingMethods);
}
