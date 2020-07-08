#pragma once

#include <vector>
#include <iostream>

using namespace std;

void showBoard(const vector<char>& board);

char makeTurn(vector<char>& board, char playerTurn);

char enterTurn(const vector<char>& board);
