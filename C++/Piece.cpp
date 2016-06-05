#include <iostream>
#include "Piece.h"
using namespace std;

Piece::Piece(string user, int num, int r, int c, string i) 
	: playerName(user), 
	  playerNum(num),
	  row(r),
	  col(c),
	  instance(i) 
	  {};

King::King(string user, int num, int r, int c) 
	: Piece(user, num, r, c, "King") {
	  	if (playerNum == 1) {
	  		icon = "\u2654";
	  	} else {
	  		icon = "\u265A";
	  	}
	}
Queen::Queen(string user, int num, int r, int c) 
	: Piece(user, num, r, c, "Queen") {
	  	if (playerNum == 1) {
	  		icon = "\u2655";
	  	} else {
	  		icon = "\u265B";
	  	}
	}
Rook::Rook(string user, int num, int r, int c) 
	: Piece(user, num, r, c, "Rook") {
	  	if (playerNum == 1) {
	  		icon = "\u2656";
	  	} else {
	  		icon = "\u265C";
	  	}
	}
Bishop::Bishop(string user, int num, int r, int c) 
	: Piece(user, num, r, c, "Bishop") {
	  	if (playerNum == 1) {
	  		icon = "\u2657";
	  	} else {
	  		icon = "\u265D";
	  	}
	}
Knight::Knight(string user, int num, int r, int c) 
	: Piece(user, num, r, c, "Knight") {
	  	if (playerNum == 1) {
	  		icon = "\u2658";
	  	} else {
	  		icon = "\u265E";
	  	}
	}
Pawn::Pawn(string user, int num, int r, int c) 
	: Piece(user, num, r, c, "Pawn") {
	  	if (playerNum == 1) {
	  		icon = "\u2659";
	  	} else {
	  		icon = "\u265F";
	  	}
	}
Empty::Empty(int r, int c) 
	: Piece("", 0, r, c, "Empty") {
		icon = " ";	
  	}


// void Piece::setPosition(int row, int col) {
// 	this->row = row;
// 	this->col = col;
// }

/*
	DOKOŃCZ BO NIE PAMIĘTAM OPERACJI NA WSKAŹNIKACH
	ma zmieniać dane parametry na szerokość i długość figury
*/
// void Piece::getPosition(int* row, int* col) {

// }

string Piece::instanceof() {
	return instance;
}

string Piece::getIcon() {
	return icon;
}

string Piece::getPlayer() {
	return playerName;
}

// void King::move (int row, int col) {

// }

// void Queen::move (int row, int col) {

// }

// void Rook::move (int row, int col) {

// }

// void Bishop::move (int row, int col) {

// }

// void Knight::move (int row, int col) {

// }

// void Pawn::move (int row, int col) {

// }


// bool King::possibleMove (int row, int col) {

// }

// bool Queen::possibleMove (int row, int col) {

// }

// bool Rook::possibleMove (int row, int col) {

// }

// bool Bishop::possibleMove (int row, int col) {

// }

// bool Knight::possibleMove (int row, int col) {

// }

// bool Pawn::possibleMove (int row, int col) {

// }

/*
SNIPPET :)

King:: () {

}

Queen:: () {

}

Rook:: () {

}

Bishop:: () {

}

Knight:: () {

}

Pawn:: () {

}

Empty:: () {

}
*/