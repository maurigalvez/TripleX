#include "TripleX_Game.h"
#include <iostream>
#include <ctime>
// ---------
// CONSTRUCTOR
// ---------
TripleX_Game::TripleX_Game()
{
	// initialize rand to get a different random value every time
	srand(time(NULL));
}
// ------
// Print introduction for new game
// ------
void TripleX_Game::PrintIntroduction(int _difficulty)
{
	std::cout << "\n\nYou are a secret agent breaking into a level " << _difficulty;
	std::cout << " secure server room...\nEnter the correct code to continue...\n\n";
}

// --------
// Play game at passed difficulty
// ---------
bool TripleX_Game::PlayGameAtDifficulty(int _difficulty)
{
	PrintIntroduction(_difficulty);

	int codeA = rand() % _difficulty + _difficulty;
	int codeB = rand() % _difficulty + _difficulty;
	int codeC = rand() % _difficulty + _difficulty;

	int codeSum = codeA + codeB + codeC;
	int codeProduct = codeA * codeB * codeC;

	// Print sum and product
	std::cout << "+ There are 3 numbers in the code";
	std::cout << "\n+ The code adds up to : " << codeSum;
	std::cout << "\n+ The codes multiply to give: " << codeProduct << std::endl;

	// Get player guess
	int playerGuessA, playerGuessB, playerGuessC;	
	std::cin >> playerGuessA;
	std::cin >> playerGuessB;
	std::cin >> playerGuessC;
	std::cout << "You entered: " << playerGuessA << playerGuessB << playerGuessC;

	// init guess variables
	int guessSum = playerGuessA + playerGuessB + playerGuessC;
	int guessProduct = playerGuessA * playerGuessB * playerGuessC;
	
	// Check whether sum and product guesses are correct
	if (guessSum == codeSum && codeProduct == guessProduct)
	{
		std::cout << "\nYou found the code!!";
		return true;
	}
	else
	{
		std::cout << "\nYou lose! Try again!";
	}
	return false;
}