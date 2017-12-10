#include "Game.h"
#include <iostream>

using namespace std;
void main()
{
	char begin;
	Game game = Game();
	game.setup();
	cout << "A game has been setup, press any key to continue" << endl;
	game.start();
}