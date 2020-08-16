#include <iostream>
using namespace std;
#include <conio.h>;

bool gameOver;
bool secondTurn;
bool match;
bool choose;
bool error;

char board[4][4];
char game [4][4];

char turnOne;
int x;
int y;
char firstLetter;

void Setup() {
	gameOver = false;
	secondTurn = false;
	match = false;
	choose = false;

	board[0][0] = 'A';
	board[0][1] = 'B';
	board[0][2] = 'C';
	board[0][3] = 'D';

	board[1][0] = 'E';
	board[1][1] = 'F';
	board[1][2] = 'G';
	board[1][3] = 'H';

	board[2][0] = 'I';
	board[2][1] = 'J';
	board[2][2] = 'K';
	board[2][3] = 'L';

	board[3][0] = 'M';
	board[3][1] = 'N';
	board[3][2] = 'O';
	board[3][3] = 'P';


	int x = rand() % 4;
	int y = rand() % 4;
	game[x][y] = '1';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '1';

	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '2';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '2';

	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '3';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '3';

	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '4';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '4';

	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '5';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '5';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '6';

	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '6';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '7';

	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '7';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '8';
	while (game[x][y] == '1' or game[x][y] == '2' or game[x][y] == '3' or game[x][y] == '4' or
		game[x][y] == '5' or game[x][y] == '6' or game[x][y] == '7' or game[x][y] == '8') {
		x = rand() % 4;
		y = rand() % 4;
	}
	game[x][y] = '8';

}

void Draw() {

	if(error)
		cout << "Invalid letter chosen";
	else if (!secondTurn)
		cout << "Choose a letter";
	else if (choose)
		if (match)
			cout << "It's a match!";
		else
			cout << "Try again";
	else if (secondTurn)
		cout << "Find the matching number";

	cout << endl;
	cout << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {

			cout << board[i][j];
			cout << "  ";

		}
		cout << '\n';
	}
	cout << endl;

}

void Input() {

	match = false;
	choose = false;
	error = false;
	//Positive if keyboard is pressed, 0 if nothing is pressed
	if (_kbhit()) {
		switch (_getch()) {
		case 'A':
			if (firstLetter == 'A' or board[0][0] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[0][0] = game[0][0];

				if (secondTurn) {
					// Match
					choose = true;
					if (board[0][0] == turnOne) {
						match = true;
						Draw();
						board[0][0] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[0][0] = 'A';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[0][0];
					firstLetter = 'A';
					x = 0;
					y = 0;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'B':
			if (firstLetter == 'B' or board[0][1] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[0][1] = game[0][1];

				if (secondTurn) {
					// Match
					choose = true;
					if (board[0][1] == turnOne) {
						match = true;
						Draw();
						board[0][1] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[0][1] = 'B';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[0][1];
					firstLetter = 'B';
					x = 0;
					y = 1;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'C':
			if (firstLetter == 'C' or board[0][2] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[0][2] = game[0][2];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[0][2] == turnOne) {
						match = true;
						Draw();
						board[0][2] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[0][2] = 'C';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[0][2];
					firstLetter = 'C';
					x = 0;
					y = 2;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'D':
			if (firstLetter == 'D' or board[0][3] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[0][3] = game[0][3];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[0][3] == turnOne) {
						match = true;
						Draw();
						board[0][3] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[0][3] = 'D';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[0][3];
					firstLetter = 'D';
					x = 0;
					y = 3;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'E':
			if (firstLetter == 'E' or board[1][0] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[1][0] = game[1][0];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[1][0] == turnOne) {
						match = true;
						Draw();
						board[1][0] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[1][0] = 'E';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[1][0];
					firstLetter = 'E';
					x = 1;
					y = 0;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'F':
			if (firstLetter == 'F' or board[1][1] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[1][1] = game[1][1];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[1][1] == turnOne) {
						match = true;
						Draw();
						board[1][1] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[1][1] = 'F';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[1][1];
					firstLetter = 'F';
					x = 1;
					y = 1;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'G':
			if (firstLetter == 'G' or board[1][2] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[1][2] = game[1][2];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[1][2] == turnOne) {
						match = true;
						Draw();
						board[1][2] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[1][2] = 'G';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[1][2];
					firstLetter = 'G';
					x = 1;
					y = 2;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'H':
			if (firstLetter == 'H' or board[1][3] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[1][3] = game[1][3];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[1][3] == turnOne) {
						match = true;
						Draw();
						board[1][3] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[1][3] = 'H';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[1][3];
					firstLetter = 'H';
					x = 1;
					y = 3;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'I':
			if (firstLetter == 'I' or board[2][0] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[2][0] = game[2][0];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[2][0] == turnOne) {
						match = true;
						Draw();
						board[2][0] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[2][0] = 'I';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[2][0];
					firstLetter = 'I';
					x = 2;
					y = 0;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'J':
			if (firstLetter == 'J' or board[2][1] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[2][1] = game[2][1];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[2][1] == turnOne) {
						match = true;
						Draw();
						board[2][1] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[2][1] = 'J';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[2][1];
					firstLetter = 'J';
					x = 2;
					y = 1;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'K':
			if (firstLetter == 'K' or board[2][2] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[2][2] = game[2][2];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[2][2] == turnOne) {
						match = true;
						Draw();
						board[2][2] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[2][2] = 'K';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[2][2];
					firstLetter = 'K';
					x = 2;
					y = 2;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'L':
			if (firstLetter == 'L' or board[2][3] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[2][3] = game[2][3];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[2][3] == turnOne) {
						match = true;
						Draw();
						board[2][3] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[2][3] = 'L';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[2][3];
					firstLetter = 'L';
					x = 2;
					y = 3;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'M':
			if (firstLetter == 'M' or board[3][0] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[3][0] = game[3][0];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[3][0] == turnOne) {
						match = true;
						Draw();
						board[3][0] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[3][0] = 'M';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[3][0];
					firstLetter = 'M';
					x = 3;
					y = 0;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'N':
			if (firstLetter == 'N' or board[3][1] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[3][1] = game[3][1];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[3][1] == turnOne) {
						match = true;
						Draw();
						board[3][1] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[3][1] = 'N';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[3][1];
					firstLetter = 'N';
					x = 3;
					y = 1;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'O':
			if (firstLetter == 'O' or board[3][2] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[3][2] = game[3][2];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[3][2] == turnOne) {
						match = true;
						Draw();
						board[3][2] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[3][2] = 'O';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[3][2];
					firstLetter = 'O';
					x = 3;
					y = 2;
					secondTurn = true;
					Draw();
				}
			}
			break;

		case 'P':
			if (firstLetter == 'P' or board[3][3] == ' ') {
				error = true;
				Draw();
				error = false;
				Draw();
			}
			else {
				board[3][3] = game[3][3];

				if (secondTurn) {
					choose = true;
					// Match
					if (board[3][3] == turnOne) {
						match = true;
						Draw();
						board[3][3] = ' ';
						board[x][y] = ' ';
					}
					// No match
					else {
						Draw();
						board[3][3] = 'P';
						board[x][y] = firstLetter;
					}
					secondTurn = false;
					Draw();
				}
				// First turn
				else {
					turnOne = game[3][3];
					firstLetter = 'P';
					x = 3;
					y = 3;
					secondTurn = true;
					Draw();
				}
			}
			break;
		}
	}

}

void Logic() {
	gameOver = true;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (board[i][j] != ' ')
				gameOver = false;
		}
	}
}

int main() {
	Setup();
	Draw();
	while (!gameOver) {
		Input();
		Logic();
	}
	cout << "You have won!";
	return 0;
}