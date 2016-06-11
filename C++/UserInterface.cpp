#include <iostream>
#include "UserInterface.h"
#include "GameInterface.h"
using namespace std;

void UserInterface::init() {
	
	cout << "\033c";
	cout << "Welcome to CHESS \n\n";
	cout << "User 1. name: ";
	cin >> user1;
	cout << "User 2. name: ";
	cin >> user2;
	cout << "Tap Enter to start game";
	cin.get();
	game = new GameInterface(user1, user2);
	game->renderBoard();

	while (1) {
		cout << user1 << " - black\n" << user2 << " - white\n";
		turn(user1);
		afterTurn();
		cout << user1 << " - black\n" << user2 << " - white\n";
		turn(user2);
		afterTurn();
	}
}
void UserInterface::turn(string user) {
	int row, newRow;
	char col, newCol;
	int r, c, nr, nc;
	bool valid;
	cout << "This is " << user <<"'s turn: ";
	do {
		cout << "Enter piece's column:";
		cin >> col;
		cout << "Enter piece's row:";
		cin >> row;
		r = rowToInt(row);
		c = colToInt(col);
		cout << "Enter new piece's column:";
		cin >> newCol;
		cout << "Enter new piece's row:";
		cin >> newRow;
		nr = rowToInt(newRow);
		nc = colToInt(newCol);
		valid = makeMove(r, c, nr, nc, user);
		if (!valid) {
			cout << "Invalid move!!!" << endl << endl;  
		}
	} while ( !valid );
}

void UserInterface::afterTurn() {
	game->charToPiece();
	game->renderBoard();
}

bool UserInterface::makeMove(int row, int col, int newRow, int newCol, string user) {
	return game->makeMove(row, col, newRow, newCol, user);
}

int UserInterface::colToInt(char col) {
	if (col == 'a') {
		return 0;
	} else if (col == 'b') {
		return 1;
	} else if (col == 'c') {
		return 2;
	} else if (col == 'd') {
		return 3;
	} else if (col == 'e') {
		return 4;
	} else if (col == 'f') {
		return 5;
	} else if (col == 'g') {
		return 6;
	} else if (col == 'h') {
		return 7;
	}
}
int UserInterface::rowToInt(int row) {
	switch (row) {
		case 8: return 0;
		case 7: return 1;
		case 6: return 2;
		case 5: return 3;
		case 4: return 4;
		case 3: return 5;
		case 2: return 6;
		case 1: return 7;
	}
}