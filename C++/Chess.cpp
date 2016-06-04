#include <iostream>
#include "GameInterface.h"
#include "UserInterface.h"
using namespace std;

int main (int argc, char *argv[]) {
	UserInterface ui;
	ui.init();
	cout << endl; 
	return 0;
}