#include "Game.h"

using namespace std;

Game::Game()
{
	battleground;
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
	int player1chose, player2chose, input;
	bool printSubMenu;
	while (gameIsNotFinished())
	{
		printSubMenu = true;
		cout << "Player 1, please select a pokemon for battle" << endl;
		player1->printAvailablePokemons();
		cin >> player1chose;
		cout << "Player 2, please select a pokemon for battle" << endl;
		player2->printAvailablePokemons();
		cin >> player2chose;
		Pokemon* pokemon1 = player1->getPokemon(player1chose);
		Pokemon* pokemon2 = player2->getPokemon(player2chose);
		int winner = battleground.battle((*pokemon1), (*pokemon2));
		if (winner == 1)
		{
			pokemon1->PokemonWon();
			pokemon2->PokemonLost();
		}
		else
		{
			pokemon2->PokemonWon();
			pokemon1->PokemonLost();
		}
		while (printSubMenu)
		{
			cout << "Press (1) to play another round\nPress (2) to display players status\nPress (3) to exit" << endl;
			cin >> input;
			if (input == 1)
			{
				printSubMenu = false;
				continue;
			}
			else if (input == 2)
			{
				cout << "We need to add prints here" << endl;
			}
			else
			{
				printSubMenu = false;
				break;
			}
		}
		if (input == 3) //exit game
			break;
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
