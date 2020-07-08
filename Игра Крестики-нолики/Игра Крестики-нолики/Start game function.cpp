#include "Start game function.h"

void startGame(char playerChip)
{
	vector<char>board =
	{
		'0', '1', '2',
		'3', '4', '5',
		'6', '7', '8'
	};

	char position;
	char whoseTurn;
	char matchResult = 'N';


	while (matchResult == 'N')
	{
		if (playerChip == 'X')
		{
			position = enterCell(board);
			board[position] = 'X';
			matchResult = isWinnerDetected(board);

			position = pcCell(board);
			board[position] = 'O';
			matchResult = isWinnerDetected(board);
		}
		else
		{
			position = pcCell(board);
			board[position] = 'X';
			matchResult = isWinnerDetected(board);

			position = enterCell(board);
			board[position] = 'O';
			matchResult = isWinnerDetected(board);
		}
	}

	gameOver(matchResult, playerChip);
}
