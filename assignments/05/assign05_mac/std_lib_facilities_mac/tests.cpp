#include "tests.h"
#include "std_lib_facilities.h"
#include "utilities.h"
#include "Card.h"
#include "CardDeck.h"
#include "Blackjack.h"


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

	cout << "###" << setw(set_width) << "testClassThingy" << setw(set_width) << "###" << endl;
	Card newCard(Suit(randomWithLimits(3, 0)), Rank(randomWithLimits(14, 2)));
	   
	cout << newCard.suit() << endl;
	cout << newCard.rank() << endl;

	cout << newCard.toString() << endl;
	cout << newCard.toStringShort() << endl;

	Card anotherNewCard();
}

void testCardDeckThingy() {
	cout << "###" << setw(set_width) << "testCardDeckThingy" << setw(set_width) << "###" << endl;
	CardDeck newDeck;


	newDeck.print();
	newDeck.printShort();

	cout << "everyone is shuffeling" << endl;
	newDeck.shuffle();

	newDeck.print();
	newDeck.printShort();

}

void playBlackjack() {
	cout << "###" << setw(set_width) << "playBlackjack" << setw(set_width) << "###" << endl;
	Blackjack newGame;
	int userInput;
	do {

		newGame.printTable(false);
		cout << "Choose action\n"
			"0)Another card\n"
			"1)Show score\n";
			cin >> userInput;
			switch (userInput) {
			case 0: cout << endl; newGame.givePlayerCard(); cout << endl; break;
			}
	} while (userInput != 1 && newGame.playerScore() < 22);

	newGame.printDealer(true);
	while (newGame.dealerScore() < 17 && newGame.playerScore() < 22) {
		newGame.giveDealerCard();
		newGame.printDealer(true);
	}
	cout << "###" << setw(set_width) << "Game ended" << setw(set_width) << "###" << endl;
	newGame.printTable(true);
	newGame.printScore();
	newGame.checkWinCondition();

}
