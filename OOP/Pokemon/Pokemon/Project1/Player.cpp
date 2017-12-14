#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(int num) : index(num)
{
}

void Player::initPlayer()
{
	cout << "Player " << index << ", you received the following pokemons:" << endl;

}

void Player::receivePokemon(Pokemon * pokemon)
{
	cout << "Player " << index << " has received the pokemon " << pokemon->getName() << endl;
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


Player::~Player()
{
}
