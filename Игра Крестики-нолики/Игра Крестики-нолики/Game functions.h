#pragma once

#include <vector>
#include <iostream>


using namespace std;

void showBoard(const vector<char>& board);

void makeTurn(vector<char>& board, char playerturn);

char enterTurn(const vector<char>& board);
