#include "std_lib_facilities.h"
//#include "utilities.h"
#include "tests.h"
#include "menu.h"



void awesomeMenuComingUp() {
	int user_input;
	do {
		cout << "\nVelg funksjon:\n"
			"0)Avslutt\n"
			"1)testRandomCardVersionOne\n"
			"2)testCountWithCards\n"
			"3)testMathWithCards\n"
			"4)testStructWithCard\n"
			"5)testStructWithShortString\n"
			"6)-----------------------\n"
			"Angi valg (0-6): ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testRandomCardVersionOne(); cout << endl; break;
		case 2: cout << endl; testCountWithCards(); cout << endl; break;
		case 3: cout << endl; testMathWithCards(); cout << endl; break;
		case 4: cout << endl; testStructWithCard(); cout << endl; break;
		case 5: cout << endl; testStructWithShortString(); cout << endl; break;
		case 6: cout << endl; cout << "part 6"; cout << endl; break;
		}

	} while (!(user_input == 0));
}

