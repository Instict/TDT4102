#include "std_lib_facilities.h"
#include "menu.h"
#include "utilities.h"
#include "Card.h"

int main(){
	srand(static_cast<unsigned int>(time(nullptr)));

	int a = 3;
	int b = 2;


	for (int i = 0; i < 5; i++) {
		cout << rankToString(Rank(randomWithLimits(14, 2)));
		cout << " of ";
		cout << suitToString(Suit(randomWithLimits(3, 0))) << endl;
	}
	for (int j = 2; j <= 14; j++) {
		cout << rankToString(Rank(j)) << endl;
	}
	cout << rankToString(Rank(a));
	cout << " + ";
	cout << rankToString(Rank(b));
	cout << " = ";
	cout << rankToString(Rank(a+b));
	cout << endl;
	//awesomeMenuComingUp();

	return 0;
}