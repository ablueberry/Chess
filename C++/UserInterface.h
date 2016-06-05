#ifndef USER_INTERFACE
#define USER_INTERFACE
#include "GameInterface.h"
using namespace std; 
class UserInterface {
public:
	string user1;
	string user2;
	GameInterface* game;
	void init();
	void turn(string user);
	void possibleMove(int row, int col);
	void makeMove(int row, int col, int newRow, int newCol);
	int colToInt(char col); 
	int rowToInt(int row);
};

#endif