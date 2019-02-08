#include "std_lib_facilities.h"
#include "utilities.h"
#include "menu.h"
#include "tests.h"
#include "mastermind.h"

void playMastermind() {
	constexpr int size = 4;
	constexpr int letters = 6;


	string code;
	string guess;
	int tries = 10;
	
	code = randomizeString(size, 'A' + (letters - 1), 'A');
	//code = "BEEE";

	cout << endl;
	cout << "code: ";
	for (int i = 0; i < code.size(); i++) {
		cout << code[i];
	}

    do {
	

		cout << endl;
		cout << "You have " << tries << " tries left!" << endl;
		guess = readInputToString(size);
		//guess = "BBBB";	//	####	BUILD ONLY		####
		cout << "guess: ";
		for (int i = 0; i < guess.size(); i++) {
			cout << guess[i];
		}
		cout << endl;
		cout << "correct spot: " << checkCharacters(code, guess) << endl;
		cout << "correct color: " << checkCharactersAndPosition(code, guess) << endl;
		tries--;

	} while (checkCharacters(code, guess) < code.size() && tries > 0);
	if (checkCharacters(code, guess) == code.size()) {
		cout << "You won!" << endl;
	}
	else {
		cout << "You lost!" << endl;
	}

}
