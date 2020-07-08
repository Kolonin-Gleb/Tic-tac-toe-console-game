// Игра Крестики-нолики
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

	short gameAction = enterAction();

	if (gameAction == CHECK_RULES)
	{
		showGameRules();
	}


	system("pause");
	return 0;
}
