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

	while (true)
	{
		if (playerChip == 'X')
		{
			position = enterCell(board);
			board[position] = 'X';
		}
		else
		{

		}
	}


	


}


