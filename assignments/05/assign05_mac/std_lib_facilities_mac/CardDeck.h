#pragma once

#include "std_lib_facilities.h"
#include "Card.h"


class CardDeck {
private:
	vector<Card> cards;
	int currentCardIndex;
public:
	CardDeck();
	void swap(int firstIndex, int secondIndex);
	void print();
	void printShort();
	void shuffle();
	const Card& drawCard();
};