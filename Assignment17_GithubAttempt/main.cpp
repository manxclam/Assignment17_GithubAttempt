/*
Name      : Isaiah Almejo

Student ID: 0503757

Date      : November 19, 2020

Assignment: Assignment 17, TIC-TAC-TOE
*/


#include <iostream>
using namespace std;

void createGameBoard(char gb[][3], int numColumns);
void printGameBoard(char gb[][3], int numColumns);
bool markSpace(char gb[][3], int row, int col);

int main()
{
	char board[3][3];

	createGameBoard(board, 3);
	printGameBoard(board, 3);


	return 0;
}

void createGameBoard(char gb[][3], int numColumns)
{
	for (int row = 0; row < numColumns; row++)
	{
		for (int column = 0; column < numColumns; column++)
		{
			gb[row][column] = '-';
		}
	}
}

void printGameBoard(char gb[][3], int numColumns)
{
	for (int row = 0; row < numColumns; row++)
	{
		for (int column = 0; column < numColumns; column++)
		{
			cout << gb[row][column] << '\t';
		}
		cout << endl << endl;
	}
}

bool markSpace(char gb[][3], int row, int col)
{
	static bool xTurn = false;

	xTurn = !xTurn;

	if (gb[row][col] == '-')
	{
		if (xTurn == true)
		{
			gb[row][col] = 'X';
		}
		else
		{
			gb[row][col] = 'O';
		}
		system("CLS");			//needed to clear the screen to be updated

		printGameBoard(gb);		//part two of updating the game board with new mark
		return true;
	}
	return false;				//needed to check if the space is avaialbe for play
}

bool gameOver(char gb[][3], char& whoWon)
{
	char winner = ' ';

	if (gb[0][0] != '-' && gb[0][0] == gb[1][1] && gb[0][0] == gb[2][2])
		winner = gb[0][0];
	else if (gb())
}