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


void Piece::setPosition(int r, int c) {
	row = r;
	col = c;
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

bool King::move (int r, int c) {
	if (r == row+1 || r == row-1) {
		if (c == col+1 || c == col || c == col-1) {
			return true;
		} else {
			return false;
		}
	} else if (r == row) {
		if (c == col+1 || c == col-1) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

bool Queen::move (int r, int c) {
	if (r == row) {
		return true;
	} else if (c == col) {
		return true;
	} else {
		return false;
	}
	for (int i = 1; i < 8; i++) {
		if (r == row+i && c == col+i) {
			return true;
		} else if (r == row+i && c == col-i) {
			return true;
		} else if (r == row-i && c == col+i) {
			return true;
		} else if (r == row-i && c == col-i) {
			return true;
		}
	}
}

bool Rook::move (int r, int c) {
	if (r == row) {
		return true;
	} else if (c == col) {
		return true;
	} else {
		return false;
	}
}

bool Bishop::move (int r, int c) {
	for (int i = 1; i < 8; i++) {
		if (r == row+i && c == col+i) {
			return true;
		} else if (r == row+i && c == col-i) {
			return true;
		} else if (r == row-i && c == col+i) {
			return true;
		} else if (r == row-i && c == col-i) {
			return true;
		}
	}
	return false;
}

bool Knight::move (int r, int c) {
	if (r == row+1 || r == row-1) {
		if (c == col+2 || c == col-2) {
			return true;
		}
	} else if (r == row+2 || r == row-2) {
		if (c == col+1 || c == col+1) {
			return true;
		}
	} else {
		return false;
	}
}

bool Pawn::move (int r, int c) {
	// Góra planszy
	if (playerNum == 2) {
		if (row == 6) {
			if (c == col) {
				if (r == row+1 || r == row+2) {
					return true;
				} else {
					return false;
				}
			} else {
				return false;
			}
		} else {
			if (c == col) {
				if (r == row+1) {
					return true;
				} else {
					return false;
				}
			} else {
				return false;
			}
		}
	} else {
		// Dół planszy
		if (row  == 1) {
			if (c == col) {
				if (r == row-1 || r == row-2) {
					return true;
				} else {
					return false;
				}
			} else {
				return false;
			}
		} else {
			if (c == col) {
				if (r == row-1) {
					return true;
				} else {
					return false;
				}
			} else {
				return false;
			}
		}
	}
}

bool Empty::move(int row, int col) {
	return false;
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