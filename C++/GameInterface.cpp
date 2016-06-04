#include <iostream>
#include "GameInterface.h"
using namespace std;

GameInterface::GameInterface() {
	initBoard();
}

void GameInterface::initBoard() {
	string row = "RNBQKNBR";
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
			switch (char_board[row][col]) {
				case "R":
				piece_board[row][col] = new Rook(userName1, 1, row, col);
				break;

				case "r":
				piece_board[row][col] = new Rook(userName2, 2, row, col);
				break;

				case "N":
				piece_board[row][col] = new Knight(userName1, 1, row, col);
				break;

				case "n":
				piece_board[row][col] = new Knight(userName2, 2, row, col);
				break;

				case "B":
				piece_board[row][col] = new Bishop(userName1, 1, row, col);
				break;

				case "b":
				piece_board[row][col] = new Bishop(userName2, 2, row, col);
				break;

				case "Q":
				piece_board[row][col] = new Queen(userName1, 1, row, col);
				break;

				case "q":
				piece_board[row][col] = new Queen(userName2, 2, row, col);
				break;

				case "K":
				piece_board[row][col] = new King(userName1, 1, row, col);
				break;

				case "k":
				piece_board[row][col] = new King(userName2, 2, row, col);
				break;

				case "P":
				piece_board[row][col] = new Pawn(userName1, 1, row, col);
				break;

				case "p":
				piece_board[row][col] = new Pawn(userName2, 2, row, col);
				break;

				default:
				piece_board[row][col] = new Empty(row, col);
				break;				 
			}
		}
	}
}

void GameInterface::pieceToChar(){
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLS; col++) {
			Piece piece = piece_board[row][col];
			switch (piece.instanceof()) {
				case "Rook":
				if (piece.getPlayer() == user1)
					char_board[row][col] = "R";
				if (piece.getPlayer() == user2)
					char_board[row][col] = "r";
				break;

				case "Knight":
				if (piece.getPlayer() == user1)
					char_board[row][col] = "N";
				if (piece.getPlayer() == user2)
					char_board[row][col] = "n";
				break;

				case "Bishop":
				if (piece.getPlayer() == user1)
					char_board[row][col] = "B";
				if (piece.getPlayer() == user2)
					char_board[row][col] = "b";
				break;

				case "Queen":
				if (piece.getPlayer() == user1)
					char_board[row][col] = "Q";
				if (piece.getPlayer() == user2)
					char_board[row][col] = "q";
				break;

				case "King":
				if (piece.getPlayer() == user1)
					char_board[row][col] = "K";
				if (piece.getPlayer() == user2)
					char_board[row][col] = "k";
				break;

				case "Pawn":
				if (piece.getPlayer() == user1)
					char_board[row][col] = "P";
				if (piece.getPlayer() == user2)
					char_board[row][col] = "p";
				break;

				default:
				char_board[row][col] = " ";
				break;				 
			}
		}
	}
}

string GameInterface::getPiece(int row, int col) {
	return piece_board[row][col].getIcon();
}

// czy to bedzie potrzebne???
// string getPieceObject(int row, int col) {
// 	// ...
// }

void GameInterface::renderBoard() {
	cout << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << " | " << getPiece(i, j);
		} 
		cout << " |" << endl;
	}
}

