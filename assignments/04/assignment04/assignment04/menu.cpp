#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"

void awesomeMenuComingUp() {
	int user_input;
	do {
		cout << "\nVelg funksjon:\n"
			"0)Avslutt\n"
			"1)test stuff\n"
			"2)vector\n"
			"3)sortering\n"
			"4)string\n"
			"5)mastermind\n"
			"6)mastermind med grafikk\n"
			"Angi valg (0-6): ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testCallByValue(); cout << endl; break;
		case 2: cout << endl; cout << "part 2"; cout << endl; break;
		case 3: cout << endl; cout << "part 3"; cout << endl; break;
		case 4: cout << endl; cout << "part 4"; cout << endl; break;
		case 5: cout << endl; cout << "part 5"; cout << endl; break;
		case 6: cout << endl; cout << "part 6"; cout << endl; break;
		}

	} while (!user_input == 0);
}