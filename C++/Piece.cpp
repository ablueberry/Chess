#include <iostream>
#include "Piece.h"
using namespace std;

Piece::Piece(string user, int num, int r, int c) 
	: playerName(user), 
	  playerNum(num),
	  row(r),
	  col(c) 
	  {};

Queen::Queen(string user, int num, int r, int c) 
	: Piece(user, num, r, c),
	  instance("Queen") {
	  	if (playerNum == 1) {
	  		icon = "Q";
	  	} else {
	  		icon = "q";
	  	}
	}
Rook::Rook(string user, int num, int r, int c) 
	: Piece(user, num, r, c),
	  instance("Rook") {
	  	if (playerNum == 1) {
	  		icon = "R";
	  	} else {
	  		icon = "r";
	  	}
	}
Bishop::Bishop(string user, int num, int r, int c) 
	: Piece(user, num, r, c),
	  instance("Bishop") {
	  	if (playerNum == 1) {
	  		icon = "B";
	  	} else {
	  		icon = "b";
	  	}
	}
Knight::Knight(string user, int num, int r, int c) 
	: Piece(user, num, r, c),
	  instance("Knight") {
	  	if (playerNum == 1) {
	  		icon = "N";
	  	} else {
	  		icon = "n";
	  	}
	}
Pawn::Pawn(string user, int num, int r, int c) 
	: Piece(user, num, r, c),
	  instance("Pawn") {
	  	if (playerNum == 1) {
	  		icon = "P";
	  	} else {
	  		icon = "p";
	  	}
	}
Empty::Empty(int r, int c) 
	: row(r),
	  col(c),
	  instance("Empty") {
		icon = " ";	
  	}
}

void Piece::setPosition(int row, int col) {
	this->row = row;
	this->col = col;
}

/*
	DOKOŃCZ BO NIE PAMIĘTAM OPERACJI NA WSKAŹNIKACH
	ma zmieniać dane parametry na szerokość i długość figury
*/
void Piece::getPosition(int* row, int* col) {

}

string Piece::instanceof() {
	return instance;
}

string Piece::getIcon() {
	return icon;
}

string Piece::getPlayer() {
	return playerName;
}

void King::move (int row, int col) {

}

void Queen::move (int row, int col) {

}

void Rook::move (int row, int col) {

}

void Bishop::move (int row, int col) {

}

void Knight::move (int row, int col) {

}

void Pawn::move (int row, int col) {

}


bool King::possibleMove (int row, int col) {

}

bool Queen::possibleMove (int row, int col) {

}

bool Rook::possibleMove (int row, int col) {

}

bool Bishop::possibleMove (int row, int col) {

}

bool Knight::possibleMove (int row, int col) {

}

bool Pawn::possibleMove (int row, int col) {

}

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