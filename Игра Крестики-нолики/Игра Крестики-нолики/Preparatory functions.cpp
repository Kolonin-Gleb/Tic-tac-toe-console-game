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
			cout << "¬аш ввод некорректен!" << endl;
		}
	}
}

void showGameRules()
{
	cout << "\t\tѕравила игры:" << endl;

	cout << "     ак происход€т ходы:" << endl;
	cout << "” каждого игрока есть свои фишки." << endl;
	cout << "1 »грок, всегда ходит крестиками \"X\"." << endl;
	cout << "2 »грок, всегда ходит ноликами \"O\"." << endl;
	cout << "»гроки ход€т по очереди выставл€€ свои фишки на свободные клетки игрового пол€." << endl << endl;

	cout << "     ак определ€етс€ победитель: " << endl;
	cout << "ѕобедителем €вл€етс€ игрок, который первый выставит 3 своих фишки в р€д по" << endl;
	cout << "горизонтали, вертикали или одной из диагоналей игрового пол€." << endl << endl;

	cout << "    —лучай с ничьей:" << endl;
	cout << "¬ игре возможна ничь€. ќна возникает, если все клетки игрового пол€ зан€ты" << endl;
	cout << "и при этом ни один из игроков не выставил 3 своих фишки в р€д по перечисленным выше направлени€м." << endl << endl;

	cout << "”дачи и при€тной игры!" << endl;
	system("pause");
	system("cls");
}
