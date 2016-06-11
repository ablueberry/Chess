#include <iostream>
#include "GameInterface.h"
#include "Piece.h"
using namespace std;

GameInterface::GameInterface(string user1, string user2) 
	: userName1(user1),
	  userName2(user2) {
	initBoard();
	charToPiece();
}

void GameInterface::initBoard() {
	string row = "RNBQKBNR";
	for (int col = 0; col < COLS; col++) {
		char_board[0][col] = row[col] + 32;
		char_board[1][col] = 'p';
		char_board[2][col] = ' ';
		char_board[3][col] = ' ';
		char_board[4][col] = ' ';
		char_board[5][col] = ' ';
		char_board[6][col] = 'P';
		char_board[7][col] = row[col];
	}
}
// Tworzy całą tablice obiektów
void GameInterface::charToPiece() {
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLS; col++) {
			string c = char_board[row][col];
			if (c == "R") {
				piece_board[row][col] = new Rook(userName1, 1, row, col);
			} else if (c == "r") {
				piece_board[row][col] = new Rook(userName2, 2, row, col);
			} else if (c == "N") {
				piece_board[row][col] = new Knight(userName1, 1, row, col);
			} else if (c == "n") {
				piece_board[row][col] = new Knight(userName2, 2, row, col);
			} else if (c == "B") {
				piece_board[row][col] = new Bishop(userName1, 1, row, col);
			} else if (c == "b") {
				piece_board[row][col] = new Bishop(userName2, 2, row, col);
			} else if (c == "Q") {
				piece_board[row][col] = new Queen(userName1, 1, row, col);
			} else if (c == "q") {
				piece_board[row][col] = new Queen(userName2, 2, row, col);
			} else if (c == "K") {
				piece_board[row][col] = new King(userName1, 1, row, col);
			} else if (c == "k") {
				piece_board[row][col] = new King(userName2, 2, row, col);
			} else if (c == "P") {
				piece_board[row][col] = new Pawn(userName1, 1, row, col);
			} else if (c == "p") {
				piece_board[row][col] = new Pawn(userName2, 2, row, col);
			} else {
				piece_board[row][col] = new Empty(row, col);				 
			}
		}
	}
}


string GameInterface::getPiece(int row, int col) {
	return piece_board[row][col]->getIcon();
}

void GameInterface::renderBoard() {
	cout<<endl;
	cout << "\033c";
	cout<<"      ";
	cout<<"a    b    c    d    e    f    g    h";
	cout<<endl;
	for (int i = 0; i < 8; i++) {
		cout<<8-i;
		for (int j = 0; j < 8; j++) {
			cout << "  | " << getPiece(i, j);
		} 
		cout << "  |" << endl;
	}
}

bool GameInterface::makeMove(int row, int col, int newRow, int newCol, string user) {
	Piece* piece = piece_board[row][col];
	Piece* dest = piece_board[newRow][newCol];
	
	if (row >= 0 && row <= 7 && col >= 0  && col <= 7 && newRow >= 0 && newRow <= 7 && newCol >= 0  && newCol <= 7 ) {
		if (piece->instanceof() == "Empty") {
			cout << "Can't move empty field\n";
			return false;
		} else if (piece->getPlayer() != user) {
			cout << "It's not your piece\n";
			return false;
		} else if (piece->getPlayer() == dest->getPlayer()) {
			cout << "Can't attack yourself\n";
			return false;
		} else if (piece->move(newRow, newCol)) {
			cout << "Valid move, trying to make it\n";
			char_board[newRow][newCol] = char_board[row][col];
			char_board[row][col] = " ";
			deletePiece_board();
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

void GameInterface::deletePiece_board() {
	for (int i  = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			delete piece_board[i][j];
		}
	}
}