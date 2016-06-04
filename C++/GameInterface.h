#ifndef GAME_INTERFACE
#define GAME_INTERFACE 
class GameInterface {
private:
	static const int ROWS = 8, COLS = 8;
	char char_board[ROWS][COLS];
	Piece piece_board[ROWS][COLS];
	string userName1;
	string userName2;

	// make initial setup for chess board
	void initBoard();
	void charToPiece();
	void pieceToChar();

	// return piece on given place
	string getPiece(int row, int col);
	// Piece getPieceObject(int row, int col);

public:
	// Constructor, run initBoard
	GameInterface();

	// Print actual board setup
	void renderBoard();

};
#endif