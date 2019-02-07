#include "std_lib_facilities.h"
#include "utilities.h"
#include "menu.h"
#include "tests.h"
#include "mastermind.h"
#include "masterVisual.h"

void playMastermind() {

	constexpr int win_w = 400;
	constexpr int win_h = 600;

	constexpr int size = 4;
	constexpr int letters = 6;
	//	dummy variables for troubleshooting
	int correctPosition;
	int correctCharacter;

	string code;
	string guess;
	int tries = 10;
	int round = 0;

	code = randomizeString(size, 'A' + (letters - 1), 'A');
	//code = "BEFE";

	cout << endl;
	cout << "code: ";
	for (int i = 0; i < code.size(); i++) {
		cout << code[i];
	}


	MastermindWindow mwin{ Point{900,20}, win_w, win_h, "Mastermind" };
	//	add the solution for troubleshooting
	addGuess(mwin, code, size, 'A', round);
	hideCode(mwin, size);
	do{
		mwin.wait_for_button();
		round++;
		cout << endl;
		cout << "You have " << tries << " tries left!" << endl;
		guess = readInputToString(size);
		//guess = "ABCD";	//	####	BUILD ONLY		####
		cout << "guess: ";
		for (int i = 0; i < guess.size(); i++) {
			cout << guess[i];
		}
		cout << endl;
		cout << "correct spot: " << checkCharacters(code, guess) << endl;
		cout << "correct color: " << checkCharactersAndPosition(code, guess) << endl;
		tries--;
		addGuess(mwin, guess, size, 'A', round);
		correctPosition = checkCharacters(code, guess);
		correctCharacter = checkCharactersAndPosition(code, guess);
		addFeedback(mwin, correctPosition, correctCharacter, size, round);

		//mwin.wait_for_button();
	} while (checkCharacters(code, guess) < code.size() && tries > 0);
	if (checkCharacters(code, guess) == code.size()) {
		addGuess(mwin, code, size, 'A', 0);
		cout << "You won!" << endl;
	}
	else {
		addGuess(mwin, code, size, 'A', 0);
		cout << "You lost!" << endl;
	}

	mwin.wait_for_button();
}