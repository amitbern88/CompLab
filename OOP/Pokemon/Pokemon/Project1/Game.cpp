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

	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		player1->receivePokemon(createPokemon(Pokemons(rand() % 4)));
		player2->receivePokemon(createPokemon(Pokemons(rand() % 4)));
	}
	
}

void Game::start()
{
	int player1chose, player2chose, input;
	bool printSubMenu;

	printGameSetup();
	system("pause");
	cout << endl << "Let's battle!!" << endl << endl;

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
		cout << "=======================================" << endl;
		cout << "Player " << winner << " won the battle!" << endl;
		cout << "=======================================" << endl << endl;
		handleBattleFinish(player1, pokemon1);
		handleBattleFinish(player2, pokemon2);
		if (gameIsNotFinished())
		{
			while (printSubMenu)
			{
				cout << "Press (1) to play another battle\nPress (2) to display the player's status\nPress (3) to exit the game" << endl;
				cin >> input;
				if (input == 1)
				{
					printSubMenu = false;
					continue;
				}
				else if (input == 2)
				{
					player1->printStatus();
					player2->printStatus();
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
		else
		{
			cout << endl << "=======================================" << endl << endl << endl;
			cout << "		Player " << winner << " won the Game!" << endl;
			cout << endl << endl << "=======================================" << endl << endl;
			system("pause");
		}
	}
}

Pokemon* Game::createPokemon(Pokemons pokemonEnum)
{
	switch (pokemonEnum) {
		case eBulbasaur:
			return new Bulbasaur();
		case eCharmander:
			return new Charmander();
		case ePichu:
			return new Pichu();
		case eSquirtel:
			return new Squirtel();
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

void Game::handleBattleFinish(Player * player, Pokemon * pokemon)
{
	if (pokemon->shouldEvolve())
		player->evolvePokemon(pokemon, pokemon->getEvolution());
	else if (pokemon->getXP() <= 0)
		player->killPokemon(pokemon);
}

void Game::printGameSetup()
{
	cout << "Welcome to Nimrod & Amit's Pokemon game!" << endl;
	cout << "Player 1's pokemons:" << endl;
	player1->printAvailablePokemons();
	cout << endl;
	cout << "Player 2's pokemons:" << endl;
	player2->printAvailablePokemons();
	cout << endl;
}
