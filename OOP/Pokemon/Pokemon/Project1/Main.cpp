#include <iostream>
#include <chrono>
#include "Game.h"

using namespace std;
int main()
{
	auto start = std::chrono::high_resolution_clock::now();
	Game game = Game();
	game.setup();
	game.start();
	auto finish = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> elapsed = finish - start;

	cout << "Elapsed time: " << elapsed.count() << endl;
	return 0;
}
