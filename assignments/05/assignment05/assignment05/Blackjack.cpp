#include "Card.h"
#include "CardDeck.h"
#include "std_lib_facilities.h"
#include "Blackjack.h"
int setWidth = 5;


Blackjack::Blackjack() {
	deckOfCards.shuffle();
	dealer.resize(2);
	player.resize(2);
	dealer[0] = deckOfCards.drawCard();
	dealer[1] = deckOfCards.drawCard();
	player[0] = deckOfCards.drawCard();
	player[1] = deckOfCards.drawCard();
	
}

void Blackjack::printTable(bool value) {
	printDealer(value);
	printPlayer();
}

void Blackjack::printDealer(bool value) {
	cout << "Dealer's hand (" << dealerScore() << ") "<< endl;
	if (value) {
		for (int i = 0; i < dealer.size(); i++) {
			cout << setw(setWidth) << dealer[i].toStringShort();
		}
	}
	else {
		cout << setw(setWidth) << dealer[0].toStringShort();
		cout << setw(setWidth) << "xx" << setw(setWidth);
	}
	cout << endl;
	cout << endl;
}
void Blackjack::printPlayer() {
	cout << "Player's hand (" << playerScore() << ") " << endl;
	for (int i = 0; i < player.size(); i++) {
		cout << setw(setWidth) << player[i].toStringShort();
	}
	cout << endl;	
	cout << endl;
}
int Blackjack::playerScore() {
	int cashMoneyHero = 0;
	for (int i = 0; i < player.size(); i++) {
		cashMoneyHero += pointSystem(player[i].rankInt());
	}
	return cashMoneyHero;
}
int Blackjack::dealerScore() {
	int cashMoneyHero = 0;
	for (int i = 0; i < dealer.size(); i++) {
		cashMoneyHero += pointSystem(dealer[i].rankInt());
	}
	return cashMoneyHero;
}
int Blackjack::pointSystem(Rank rank) {
	if (int(rank) < 11) {
		return int(rank);
	}
	else {
		if (int(rank) == 14) {
			return 11;
		}
		else {
			return 10;
		}
	}
}
void Blackjack::printScore() {
	cout << "Dealer got: " << dealerScore() << " Player got: " << playerScore() << endl;
}
void Blackjack::givePlayerCard() {
	cout << "Player draws a card!" << endl << endl;
	player.push_back(deckOfCards.drawCard());
}
bool Blackjack::giveDealerCard() {
	if (dealerScore() < 17) {
		cout << "Dealer draws a card!" << endl << endl;
		dealer.push_back(deckOfCards.drawCard());
		return true;
	}
	else {
		cout << "Dealer must stand on: " << dealerScore() << endl;
		return false;
	}
}
bool Blackjack::checkWinCondition() {
	if (playerScore() == 21 && dealerScore() != 21) {
		cout << "Player have blackjack, dealer not, player win" << endl;
		return true;
	}
	else if (playerScore() > dealerScore() && playerScore() <= 21) {
		cout << "Player have higher then dealer, player win" << endl;
		return true;
	}
	else if (playerScore() < 21 && dealerScore() > 21) {
		cout << "Dealer bust" << endl;
		return true;
	}
	else {
		cout << "Dealer won" << endl;
		return false;
	}
}
