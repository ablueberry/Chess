#include <iostream>
#include "UserInterface.h"
#include "GameInterface.h"
using namespace std;

void UserInterface::menu () {
	cout << "\033c";
	cout << "Welcome to CHESS \nPress Enter to start game\n";
	cin.get();
}

void UserInterface::init() {
	GameInterface game;
	menu();
	game.renderBoard();
}