#include "tests.h"
#include "std_lib_facilities.h"
#include "utilities.h"
#include "Card.h"

constexpr int set_width = 25;

void testRandomCardVersionOne() {
	cout << "###" << setw(set_width) << "testRandomCardVersionOne" << setw(set_width) << "###" << endl;
	for (int i = 0; i < 5; i++) {
		cout << rankToString(Rank(randomWithLimits(14, 2)));
		cout << " of ";
		cout << suitToString(Suit(randomWithLimits(3, 0))) << endl;
	}
}

void testCountWithCards() {
	cout << "###" << setw(set_width) << "testCountWithCards" << setw(set_width) << "###" << endl;
	for (int j = 2; j <= 14; j++) {
		cout << rankToString(Rank(j)) << endl;
	}
}
void testMathWithCards() {
	cout << "###" << setw(set_width) << "testMathWithCards" << setw(set_width) << "###" << endl;
	int a = 3;
	int b = 2;
	
	cout << rankToString(Rank(a));
	cout << " + ";
	cout << rankToString(Rank(b));
	cout << " = ";
	cout << rankToString(Rank(a + b));
	cout << endl;
}

void testStructWithCard() {
	cout << "###" << setw(set_width) << "testStructWithCard" << setw(set_width) << "###" << endl;
	CardStruct someCard, someOtherCard;

	someCard.s = Suit(0);
	someCard.r = Rank(14);

	someOtherCard.s = Suit::diamonds;
	someOtherCard.r = Rank::king;

	toString(someCard);
	toString(someOtherCard);
}

void testStructWithShortString() {
	cout << "###" << setw(set_width) << "testStructWithShortString" << setw(set_width) << "###" << endl;
	CardStruct someCard, someOtherCard;

	someCard.s = Suit(0);
	someCard.r = Rank(14);

	someOtherCard.s = Suit::diamonds;
	someOtherCard.r = Rank::king;


	cout << toStringShort(someCard) << endl;
	cout << toStringShort(someOtherCard) << endl;

}

void testClassThingy() {
	Card newCard(Suit(randomWithLimits(3, 0)), Rank(randomWithLimits(14, 2)));
	   
	cout << newCard.suit() << endl;
	cout << newCard.rank() << endl;

	cout << newCard.toString() << endl;
	cout << newCard.toStringShort() << endl;

	Card anotherNewCard();
}