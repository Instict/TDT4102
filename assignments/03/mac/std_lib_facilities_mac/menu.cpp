#include "cannonball.h"
#include "part01.h"
#include "part02.h"
#include "part03.h"
#include "std_lib_facilities.h"
#include "utilities.h"

void awesomeMenuComingUp() {
	int user_input;
	do {
		cout << "\nVelg funksjon:\n"
			"0)Avslutt\n"
			"1)Verifiser funksjoner\n"
			"2)Gjenbruk av funksjoner\n"
			"3)Et lite spill\n"
			"Angi valg (0-3): ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; part01(); cout << endl; break;
		case 2: cout << endl; part02(); cout << endl; break;
		case 3: cout << endl; part03(); cout << endl; break;
		}
	
	} while (!user_input == 0);
}