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
			"6)testClassThingy\n"
			"7)testCardDeckThingy\n"
			"8)Play Blackjack! \n"
			"Angi valg: ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testRandomCardVersionOne(); cout << endl; break;
		case 2: cout << endl; testCountWithCards(); cout << endl; break;
		case 3: cout << endl; testMathWithCards(); cout << endl; break;
		case 4: cout << endl; testStructWithCard(); cout << endl; break;
		case 5: cout << endl; testStructWithShortString(); cout << endl; break;
		case 6: cout << endl; testClassThingy(); cout << endl; break;
		case 7: cout << endl; testCardDeckThingy(); cout << endl; break;
		case 8: cout << endl; playBlackjack(); cout << endl; break;
		}

	} while (!(user_input == 0));
}
