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

	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		player1->receivePokemon(createPokemon(Pokemons(rand() % 6))); //Choose randomly between 6 pokemons
		player2->receivePokemon(createPokemon(Pokemons(rand() % 6))); //Choose randomly between 6 pokemons
	}
	
}

void Game::start()
{
	int player1chose, player2chose;

	printGameSetup();
	//system("pause");
	cout << endl << "Let's battle!!" << endl << endl;

	while (gameIsNotFinished())
	{
		player1chose = rand() % player1->getNumOfPokemons();
		Pokemon* pokemon1 = player1->getPokemon(player1chose);
		cout << "Player 1 selected "<< pokemon1->getName() << " for battle!" << endl;
		player2chose = rand() % player2->getNumOfPokemons();
		Pokemon* pokemon2 = player2->getPokemon(player2chose);
		cout << "Player 2 selected " << pokemon2->getName() << " for battle!" << endl;

		int winner = battleground.battle((*pokemon1), (*pokemon2));
		cout << "=======================================" << endl;
		cout << "Player " << winner << " won the battle!" << endl;
		cout << "=======================================" << endl << endl;
		handleBattleFinish(player1, pokemon1);
		handleBattleFinish(player2, pokemon2);
		if (gameIsNotFinished())
		{
			player1->printStatus();
			player2->printStatus();
		}
		else
		{
			cout << endl << "=======================================" << endl << endl << endl;
			cout << "		Player " << winner << " won the Game!" << endl;
			cout << endl << endl << "=======================================" << endl << endl;
			//system("pause");
		}
	}
}

Pokemon* Game::createPokemon(Pokemons pokemonEnum)
{
	switch (pokemonEnum) {
		case eBulbasaur:
			return new Bulbasaur;
		case eCharmander:
			return new Charmander;
		case ePichu:
			return new Pichu;
		case eSquirtel:
			return new Squirtel;
		case eGeodude:
			return new Geodude;
		case ePoliwag:
			return new Poliwag;
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
	if (pokemon->shouldEvolve()) //if pokemon got at least 50XP it need to evolve
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
