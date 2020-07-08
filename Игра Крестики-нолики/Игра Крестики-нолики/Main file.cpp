﻿// Игра Крестики-нолики
// Человек против программы

#include <iostream>
#include <Windows.h>

#include "Preparatory functions.h"

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

	string playerChipQuestion = "Введите 1, чтобы ходить первым.\nВведите 2, чтобы ходить вторым.";

	if (Question1or2(playerChipQuestion) == 1)
	{
		char playerChip = 'X';
	}
	else
	{
		char playerChip = 'O';
	}





	system("pause");
	return 0;
}
