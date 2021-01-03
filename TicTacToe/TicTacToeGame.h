#pragma once
struct GameField
{
	int field[3][3] = { 
		{0,0,0}, 
		{0,0,0}, 
		{0,0,0} 
	};
};

class TicTacToeGame
{
public:
	TicTacToeGame();
	~TicTacToeGame();

	void changeSymbol()
	{
		currentSymbol *= -1;
	}

private:
	GameField field;
	int currentSymbol = 1; //1 = cross -1 = zero
};

