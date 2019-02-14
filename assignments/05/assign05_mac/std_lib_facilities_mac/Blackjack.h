#pragma once
#include "Card.h"
#include "CardDeck.h"
#include "std_lib_facilities.h"

class Blackjack {
	vector<Card> dealer;
	vector<Card> player;
	CardDeck deckOfCards;
public:
	Blackjack();
	bool checkWinCondition();
	void printDealer(bool value);
	void printPlayer();
	int playerScore();
	int dealerScore();
	int pointSystem(Rank rank);
	void givePlayerCard();
	bool giveDealerCard();
	void printTable(bool value);
	void printScore();
};