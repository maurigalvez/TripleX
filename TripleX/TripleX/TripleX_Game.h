#pragma once
// ----
// Class to define an instance of TripleX_Game
// -----
class TripleX_Game
{
public:
	TripleX_Game();
	bool PlayGameAtDifficulty(int _difficulty);

private:
	void PrintIntroduction(int _difficulty);
};