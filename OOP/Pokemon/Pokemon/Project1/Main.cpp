#include "Game.h"
#include <iostream>

using namespace std;
void main()
{
	char begin;
	Game game = Game();
	game.setup();
	cout << "A game has been setup" << endl;
	system("pause");
	game.start();
	system("pause");
}