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

	void step(int row, int col)
	{
		field.field[row][col] = currentSymbol;
	}

	bool isCellSymbolCross(int row, int col)
	{
		return field.field[row][col] == 1 ? true : false;
	}

	bool isCellSymbolZero(int row, int col)
	{
		return field.field[row][col] == -1 ? true : false;
	}

	bool isCellEmpty(int row, int col)
	{
		return field.field[row][col] == 0;
	}

private:
	GameField field;
	int currentSymbol = 1; //1 = cross -1 = zero
};

