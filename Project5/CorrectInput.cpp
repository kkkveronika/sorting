//CorrectInput.cpp
#include <iostream>
#include "CorrectInput.h"
using namespace std;

int GetInt() {
	int input;
	cin >> input;
	while (!(input >= 1)) {
		cout << "Error! Try again." << endl;
		cin.clear();
		cin.sync();
		cin.ignore(INT_MAX, '\n');
		cin >> input;
	}
	return input;
}

int GetInputMatrix() {
	int input;
	cin >> input;
	while (!(input >= 1 && input<=3)) {
		cout << "Error! Try again." << endl;
		cin.clear();
		cin.sync();
		cin.ignore(INT_MAX, '\n');
		cin >> input;
	}
	return input;
}