#include "Card.h"
#include "CardDeck.h"
#include "std_lib_facilities.h"
#include "utilities.h"

CardDeck::CardDeck() {
	cards.resize(52);
	currentCardIndex = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 2; j < 15; j++) {
			cards[currentCardIndex++] = { Suit(i), Rank(j) };
		}
	}
	currentCardIndex = 0;
}


void CardDeck::swap(int firstIndex, int secondIndex) {
	Card firstNum = cards.at(firstIndex);
	cards.at(firstIndex) = cards.at(secondIndex);
	cards.at(secondIndex) = firstNum;
}

void CardDeck::print() {
	for (int i = 0; i < cards.size(); i++) {
		cout << cards[i].toString() << endl;
	}
}

void CardDeck::printShort() {
	for (int i = 0; i < cards.size(); i++) {
		cout << cards[i].toStringShort() << endl;
	}
}
void CardDeck::shuffle() {
	for (int i = 0; i < cards.size(); i++) {
		swap(i, randomWithLimits(cards.size() - 1, 0));
	}
}

const Card& CardDeck::drawCard() {
	return cards[currentCardIndex++];
}