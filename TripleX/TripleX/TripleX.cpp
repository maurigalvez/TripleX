#include <iostream>
#include "TripleX_Game.h"

int main()
{	
	// create instance of tripleXGame
	TripleX_Game* game = new TripleX_Game();

	int levelDifficulty = 1;
	int maxDifficulty = 5;

	// Loop through game until all levels are completed
	while (levelDifficulty <= maxDifficulty)
	{
		bool bLevelComplete = game->PlayGameAtDifficulty(levelDifficulty);
		std::cin.clear();
		std::cin.ignore();
		// check if player completed this level
		if (bLevelComplete)
		{
			levelDifficulty++;
		}
	}
	std::cout << "\n*** Great work agent! You got all the files! ***\n";
	game = NULL;
	delete game;
	return 0;
}