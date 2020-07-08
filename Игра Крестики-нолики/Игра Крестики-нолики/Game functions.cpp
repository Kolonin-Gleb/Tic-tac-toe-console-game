#include "Game functions.h"

void showBoard(const vector<char>& board)
{
	cout << "\t" << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << "\t" << "---------\n";
	cout << "\t" << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << "\t" << "---------\n";
	cout << "\t" << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

//char makeTurn(vector<char>& board, char playerTurn)
//{
//	
//}

char enterTurn(const vector<char>& board)
{
	int cell;
	char turn;

	while (true)
	{
		showBoard(board);
		cout << "Ваш ход!" << endl;
		cout << "Введите номер ячейки свободного игрового поля: ";
		cin >> cell;

		if (!cin)
		{
			cin.clear();
			cin.ignore(100500, '\n');
			system("cls");
			cout << "Номер ячейки введён некорректно!" << endl;
		}
		else if (cell > 8 || cell < 0)
		{
			system("cls");
			cout << "Номер ячейки слишком велик!" << endl;
			cout << "Ячейки под данным номером нет на игровом поле!" << endl;
		}
		else
		{
			turn = cell + '0'; // Преобразуем число в символ
			if (find(board.begin(), board.end(), turn) == board.end())
			{
				system("cls");
				cout << "Данная ячейка занята!" << endl;
			}
			else
			{
				system("cls");
				return turn;
			}
		}
	}
}
