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
	void afterTurn();
	bool makeMove(int row, int col, int newRow, int newCol, string user);
	int colToInt(char col); 
	int rowToInt(int row);
};

#endif