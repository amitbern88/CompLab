#pragma once
#include "Game.h"
#include <iostream>

using namespace std;
void main()
{
	Game game = Game();
	game.setup();
	game.start();
}