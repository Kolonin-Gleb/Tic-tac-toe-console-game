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
	int cell;

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
