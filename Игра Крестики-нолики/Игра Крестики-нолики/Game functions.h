#pragma once

#include <vector>
#include <iostream>
#include <ctime>
using namespace std;

void showBoard(const vector<char>& board);

short enterCell(const vector<char>& board);

short pcCell(const vector<char>& board);

char isWinnerDetected(const vector<char>& board);

void gameOver(char matchResult, char playerChip);
