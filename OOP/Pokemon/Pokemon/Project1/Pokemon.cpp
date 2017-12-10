#include "Pokemon.h"



Pokemon::Pokemon(PokemonType pokeType, int evolution) : type(pokeType), evolutionLevel(evolution)
{
}

int Pokemon::basicAttack()
{
	return 0;
}

FightingMethod* Pokemon::chooseFightingMethods() //Needs to edit this
{
	cout << getName() << " Fighting Methods are: " << endl <<
	"1. Tackle" << endl;
	cout << "Please choose method: " << endl;
	cin >> fightingMethod;
	
}

void Pokemon::PokemonWon() //Raise XP by 5 pts
{
}

void Pokemon::PokemonLost() //Reduce XP by 5 pts
{
}

char* Pokemon::getName()
{
	return 0;
}

Pokemon::~Pokemon()
{
}
