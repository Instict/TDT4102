#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "menu.h"

/*
Perhaps I should consider using linked-list or something to make the menu
##	Create new template for menu	##
*/
void awesomeMenuComingUp() {
	int user_input;
	do {
		cout << "\nVelg funksjon:\n"
			"0)Avslutt\n"
			"1)Part 1 - pass-by-reference\n"
			"2)Part 2 - vector<int>\n"
			"3)swap\n"
			"4)string\n"
			"5)mastermind\n"
			"6)mastermind med grafikk\n"
			"Angi valg (0-6): ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; part01(); cout << endl; break;
		case 2: cout << endl; part02(); cout << endl; break;
		case 3: cout << endl; testswapNumbers(); cout << endl; break;
		case 4: cout << endl; cout << "part 4"; cout << endl; break;
		case 5: cout << endl; cout << "part 5"; cout << endl; break;
		case 6: cout << endl; cout << "part 6"; cout << endl; break;
		}

	} while (!user_input == 0);
}

void part01() {
	int user_input;
	do {
		cout << "\npass-by-reference\n"
			"0)...\n"
			"1)testCallByValue()\n"
			"2)testCallByReference()\n"
			"3)testswapNumbers()\n"
			"Angi valg (0-3): ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testCallByValue(); cout << endl; break;
		case 2: cout << endl; testCallByReference(); cout << endl; break;
		case 3: cout << endl; testswapNumbers(); cout << endl; break;
		}

	} while (!user_input == 0);
}

void part02() {
	int user_input;
	do {
		cout << "\nvector<int>:\n"
			"0)...\n"
			"1)testVectorSorting()\n"
			"2).\n"
			"3).\n"
			"Angi valg (0-3): ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testVectorSorting(); cout << endl; break;
		case 2: cout << endl; testCallByReference(); cout << endl; break;
		case 3: cout << endl; testswapNumbers(); cout << endl; break;
		}

	} while (!user_input == 0);
}