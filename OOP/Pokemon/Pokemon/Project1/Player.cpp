#include "Player.h"

using namespace std;

Player::Player(int num) : index(num)
{
}

void Player::receivePokemon(Pokemon * pokemon)
{
	pokemons.add(pokemon);
}

bool Player::hasLivePokemons()
{
	return pokemons.size > 0;
}

void Player::printAvailablePokemons()
{
	pokemons.printPokeList();
}

void Player::printStatus()
{
	cout << "Player " << index << "'s pokemons:" << endl;
	printAvailablePokemons();
}

void Player::killPokemon(Pokemon * pokemon)
{
	pokemons.remove(pokemon);
}

void Player::evolvePokemon(Pokemon * existing, Pokemon * toEvolve)
{
	pokemons.replace(existing, toEvolve);
}

Pokemon * Player::getPokemon(int index)
{
	return pokemons.get(index);
}

int Player::getNumOfPokemons()
{
	return pokemons.size;
}


Player::~Player()
{
}
