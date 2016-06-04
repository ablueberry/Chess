#ifndef PIECE
#define PIECE
class Piece {
protected:
	int row;
	int col;
	string playerName;
	int playerNum;
	string instance;
	string icon;
	


public: 
	// TODO implement these:
	// DOPISZ DESTRUKTORRRR !!!!!!!
	Piece(string user, int num, int r, int c);
	void setPosition(int row, int col);
	void getPosition(int* row, int* col);
	string instanceof();
	string getIcon();
	string getPlayer();
	virtual void move(int row, int col) = 0;
	virtual bool possibleMove(int row, int col) = 0;
	

};

/*
	Dopisz każdemu publiczny atrybut instanceof
	i metode getPlayer() zwracająca nazwe playera
*/
// Król
class King : public Piece {
private:

public:
	King(string userName, int userNum, int r, int c);

};
// Królowa
class Queen : public Piece {
private:

public:
	Queen(string userName, int userNum, int r, int c);
};
// Wieża
class Rook : public Piece {
private:

public:
	Rook(string userName, int userNum, int r, int c);
};
// Goniec
class Bishop : public Piece {
private:

public:
	Bishop(string userName, int userNum, int r, int c);
};
// Koń
class Knight : public Piece {
private:

public:
	Knight(string userName, int userNum, int r, int c);
};
// Pionek
class Pawn : public Piece {
private:

public:
	Pawn(string userName, int userNum, int r, int c);
};
// Puste pole
class Empty : public Piece {
private:

public:
	Empty(int r, int c)
};

#endif