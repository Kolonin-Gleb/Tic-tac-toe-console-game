#include "Start game function.h"

void startGame(char playerChip)
{
	vector<char>board =
	{
		'0', '1', '2',
		'3', '4', '5',
		'6', '7', '8'
	};

	char whoseMove = 'X';
	char matchResult = 'N';
	short movesCount = 0;
	char position;

	while (true)
	{
		if (playerChip == whoseMove)
		{
			position = enterCell(board);
			board[position] = playerChip;
			++movesCount;
			whoseMove = passMove(whoseMove);

			if (movesCount >= 3)
			{
				if (matchResult != whoWon(board))
				{
					break;
				}
			}
			if (movesCount == 9)
			{
				break;
			}
		}
		else
		{
			position = pcCell(board);
			board[position] = whoseMove;
			++movesCount;
			whoseMove = passMove(whoseMove);

			if (movesCount >= 3)
			{
				if (matchResult != whoWon(board))
				{
					break;
				}
			}

			if (movesCount == 9)
			{
				break;
			}
		}
	}

	if (matchResult != whoWon(board))
	{
		matchResult = whoWon(board);
		gameOver(matchResult, playerChip);
	}
	else
	{
		cout << "Ничья!" << endl;
	}
}
