// Игра Крестики-нолики
// Человек против программы

#include <iostream>
#include <Windows.h>

#include "Preparatory functions.h"
#include "Start game function.h"

using namespace std;

enum GameActions
{
	CHECK_RULES = 1,
};

int main()
{
	system("title Игра Крестики-нолики");
	system("color a");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string checkRulesQuestion = "Введите 1, чтобы ознакомится с правилами.\nВведите 2, чтобы начать игру.";

	short gameAction = Question1or2(checkRulesQuestion);

	if (gameAction == CHECK_RULES)
	{
		showGameRules();
	}

	char playerChip;

	string playerChipQuestion = "Введите 1, чтобы ходить первым.\nВведите 2, чтобы ходить вторым.";

	if (Question1or2(playerChipQuestion) == 1)
	{
		playerChip = 'X';
	}
	else
	{
		playerChip = 'O';
	}

	startGame(playerChip);




	system("pause");
	return 0;
}
