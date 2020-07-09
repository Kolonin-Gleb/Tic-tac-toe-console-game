#include "Preparatory functions.h"

short Ask1or2(string question)
{
	short answer = 0;
	while (true)
	{
		cout << question << endl;
		cin >> answer;
		if (answer == 1 || answer == 2)
		{
			system("cls");
			return answer;
		}
		else
		{
			cin.clear();
			cin.ignore(100500, '\n');
			system("cls");
			cout << "��� ���� �����������!" << endl;
		}
	}
}

void showGameRules()
{
	cout << "\t\t������� ����:" << endl;

	cout << "    ��� ���������� ����:" << endl;
	cout << "� ������� ������ ���� ���� �����." << endl;
	cout << "1 �����, ������ ����� ���������� \"X\"." << endl;
	cout << "2 �����, ������ ����� �������� \"O\"." << endl;
	cout << "������ ����� �� ������� ��������� ���� ����� �� ��������� ������ �������� ����." << endl << endl;

	cout << "    ��� ������������ ����������: " << endl;
	cout << "����������� �������� �����, ������� ������ �������� 3 ����� ����� � ��� ��" << endl;
	cout << "�����������, ��������� ��� ����� �� ���������� �������� ����." << endl << endl;

	cout << "    ������ � ������:" << endl;
	cout << "� ���� �������� �����. ��� ���������, ���� ��� ������ �������� ���� ������" << endl;
	cout << "� ��� ���� �� ���� �� ������� �� �������� 3 ����� ����� � ��� �� ������������� ���� ������������." << endl << endl;

	cout << "����� � �������� ����!" << endl;
	system("pause");
	system("cls");
}
