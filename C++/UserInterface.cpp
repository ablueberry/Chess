#include <iostream>
#include "UserInterface.h"
#include "GameInterface.h"
using namespace std;

void UserInterface::init() {
	// menu();
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
		turn(user1);
		turn(user2);
	}
}
void UserInterface::turn(string user) {
	int choice, row, newRow;
	char col, newCol;
	int r, c, nr, nc;
	cout << "This is " << user <<"'s turn: ";
	cout << "Enter '1' to check possible moves" << endl;
	cout << "Emter '0' to make a move" << endl;
	cin >> choice;
	cout << "Enter piece's row:";
	cin >> row;
	cout << "Enter piece's column:";
	cin >> col;
	r = rowToInt(row);
	c = colToInt(col);
	if (choice) {
		possibleMove(r, c);
		cin.get();
	} else {
		cout << "Enter new piece's row:";
		cin >> newRow;
		cout << "Enter new piece's column:";
		cin >> newCol;
		nr = rowToInt(newRow);
		nc = colToInt(newCol);
		makeMove(r, c, nr, nc);
	}
}

void UserInterface::possibleMove(int row, int col) {
	cout<< row<< " "<< col<< endl;
}

void UserInterface::makeMove(int row, int col, int newRow, int newCol) {

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