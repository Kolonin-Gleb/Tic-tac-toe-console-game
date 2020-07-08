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

	char whoseTurn = playerChip;

	while (true)
	{
		if (playerChip == 'X')
		{
			position = enterCell(board);
			board[position] = 'X';
		}
		if (whoseTurn == 'O')
		{
			position = pcCell(board);
			board[position] = 'O';
		}
	}


	


}


