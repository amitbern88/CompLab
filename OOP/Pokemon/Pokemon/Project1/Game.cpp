#include "Game.h"

using namespace std;

Game::Game()
{
}

void Game::setup()
{
	int i;

	player1 = new Player(1);
	player2 = new Player(2);
	cout << "Created players, distributing pokemons" << endl;

	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		player1->receivePokemon(createPokemon(Pokemons(rand() % 2)));
		player2->receivePokemon(createPokemon(Pokemons(rand() % 2)));
	}
	
}

void Game::start()
{
	while (gameIsNotFinished())
	{
		int player1chose, player2chose;
		cout << "Player 1, please select a pokemon for battle" << endl;
		player1->printAvailablePokemons();
		cin >> player1chose;
		cout << "Player 2, please select a pokemon for battle" << endl;

		player2->printAvailablePokemons();
		cin >> player2chose;
		Pokemon* pokemon1 = player1->getPokemon(player1chose);
		Pokemon* pokemon2 = player2->getPokemon(player2chose);
		int winner = battle(pokemon1, pokemon2);
	}
}

Pokemon* Game::createPokemon(Pokemons pokemonEnum)
{
	switch (pokemonEnum) {
		case eBulbasaur:
			return new Bulbasaur();
		case eCharmander:
			return new Charmander();
		default:
			throw new exception();
	}
}


Game::~Game()
{
}

bool Game::gameIsNotFinished()
{
	return player1->hasLivePokemons() && player2->hasLivePokemons();
}
