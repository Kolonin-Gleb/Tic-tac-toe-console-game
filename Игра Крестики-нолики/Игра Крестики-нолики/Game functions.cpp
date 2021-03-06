#include "Game functions.h"

void showBoard(const vector<char>& board)
{
	cout << "\t" << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << "\t" << "---------\n";
	cout << "\t" << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << "\t" << "---------\n";
	cout << "\t" << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

short enterCell(const vector<char>& board)
{
	short cell;

	while (true)
	{
		showBoard(board);
		cout << "��� ���!" << endl;
		cout << "������� ����� ������ ���������� �������� ����: ";
		cin >> cell;

		if (!cin)
		{
			cin.clear();
			cin.ignore(100500, '\n');
			system("cls");
			cout << "����� ������ ����� �����������!" << endl;
		}
		else if (cell > 8 || cell < 0)
		{
			system("cls");
			cout << "����� ������ ������� �����!" << endl;
			cout << "������ ��� ������ ������� ��� �� ������� ����!" << endl;
		}
		else
		{
			// cell + '0' - �������������� ����� � ������
			if (find(board.begin(), board.end(), cell + '0') == board.end())
			{
				system("cls");
				cout << "������ ������ ������!" << endl;
			}
			else
			{
				system("cls");
				return cell;
			}
		}
	}
}

short pcCell(const vector<char>& board)
{
	srand(time(0));
	short cell = 9;

	do
	{
		cell = rand() % 9; // 0 - 8
	} while (find(board.begin(), board.end(), cell + '0') == board.end());
	
	return cell;
}

char passMove(char whoseMove)
{
	if (whoseMove == 'X')
	{
		return 'O';
	}
	else
	{
		return 'X';
	}
}

char whoWon(const vector<char>& board)
{
	// �� �����������
	if (board[0] == board[1] && board[1] == board[2])
	{
		return board[0];
	}
	else if (board[3] == board[4] && board[4] == board[5])
	{
		return board[3];
	}
	else if (board[6] == board[7] && board[7] == board[8])
	{
		return board[6];
	}
	// �� ���������
	else if (board[0] == board[3] && board[3] == board[6])
	{
		return board[0];
	}
	else if (board[1] == board[4] && board[4] == board[7])
	{
		return board[1];
	}
	else if (board[2] == board[5] && board[5] == board[8])
	{
		return board[2];
	}
	// �� ���������
	else if (board[0] == board[4] && board[4] == board[8])
	{
		return board[0];
	}
	else if (board[6] == board[4] && board[4] == board[2])
	{
		return board[6];
	}
	else
	{
		return 'N';
	}
}

void gameOver(char matchResult, char playerChip)
{
	if (playerChip == matchResult)
	{
		cout << "�����������! �� ��������!" << endl;
	}
	else
	{
		cout << "� ��������� �� ���������!" << endl;
		cout << "� ��������� ��� ������!" << endl;
	}

}
