#pragma once
#include "Game.h"
#include <iostream>

using namespace std;
int main()
{
	Game game = Game();
	game.setup();
	game.start();
	return 0;
}
