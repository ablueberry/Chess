#ifndef GAME_INTERFACE
#define GAME_INTERFACE 
#include <iostream>
#include <fstream>
#include "Piece.h"
using namespace std;
class GameInterface {
private:
	static const int ROWS = 8, COLS = 8;
	Piece* piece_board[ROWS][COLS];
	string char_board[ROWS][COLS];
	string userName1;
	string userName2;

	// make initial setup for chess board
	void initBoard();
	// void pieceToChar();
	void boardFromFile(char* file_name);
	// return piece on given place
	string getPiece(int row, int col);

public:
	// Constructor, run initBoard
	GameInterface(string user1, string user2, int saved, char* file_name);

	// Print actual board setup
	void renderBoard();
	void charToPiece();
	bool makeMove(int row, int col, int newRow, int newCol, string user);
	void deletePiece_board();
	void save();

};
#endif