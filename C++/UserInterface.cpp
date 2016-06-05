#include <iostream>
#include "UserInterface.h"
#include "GameInterface.h"
using namespace std;

// void UserInterface::menu () {
// 	cout << "\033c";
// 	cout << "Welcome to CHESS \n\n";
// 	cout << "User 1. name: ";
// 	cin >> user1;
// 	cout << "User 2. name: ";
// 	cin >> user2;
// 	cout << "Tap Enter to start game";
// 	cin.get();
// }

void UserInterface::init() {
	// menu();
	cout << "\033c";
	cout << "Welcome to CHESS \n\n";
	cout << "User 1. name: ";
	cin >> user1;
	cout << "User 2. name: ";
	cin >> user2;
	cout << "Tap Enter to start game";
	cin.get();
	GameInterface game(user1, user2);
	game.renderBoard();
}