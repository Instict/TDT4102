#include "Card.h"
#include "utilities.h"
#include "std_lib_facilities.h"


/*
map version
*/
string suitToString(Suit stringInput) {
	map<Suit, string>mapThingy;
	mapThingy[Suit::hearts] = "hearts";
	mapThingy[Suit::diamonds] = "diamonds";
	mapThingy[Suit::clubs] = "clubs";
	mapThingy[Suit::spades] = "spades";
	return mapThingy[stringInput];
}

/*
switch version
*/
string rankToString(Rank rank) {
	switch (rank) {
	case Rank::two: return "two"; break;
	case Rank::three: return "three"; break;
	case Rank::four: return "four"; break;
	case Rank::five: return "five"; break;
	case Rank::six: return "six"; break;
	case Rank::seven: return "seven"; break;
	case Rank::eight: return "eight"; break;
	case Rank::nine: return "nine"; break;
	case Rank::ten: return "ten"; break;
	case Rank::jack: return "jack"; break;
	case Rank::queen: return "queen"; break;
	case Rank::king: return "king"; break;
	case Rank::ace: return "ace"; break;
	}
}


void toString(CardStruct cardInput) {
	cout << rankToString(cardInput.r);
	cout << " of ";
	cout << suitToString(cardInput.s) << endl;
}

string toStringShort(CardStruct cardInput) {
	return suitToString(cardInput.s).substr(0, 1) + to_string(int(cardInput.r));
}

Card::Card() {
}
Card::Card(Suit suit, Rank rank) {
	s = suit;
	r = rank;
}
string Card::suit() {
	map<Suit, string>mapThingy;
	mapThingy[Suit::hearts] = "hearts";
	mapThingy[Suit::diamonds] = "diamonds";
	mapThingy[Suit::clubs] = "clubs";
	mapThingy[Suit::spades] = "spades";
	return mapThingy[s];
}
string Card::rank() {
	map<Rank, string>mapThingy;
	mapThingy[Rank::two] = "two";
	mapThingy[Rank::three] = "three";
	mapThingy[Rank::four] = "four";
	mapThingy[Rank::five] = "five";
	mapThingy[Rank::six] = "six";
	mapThingy[Rank::seven] = "seven";
	mapThingy[Rank::eight] = "eight";
	mapThingy[Rank::nine] = "nine";
	mapThingy[Rank::ten] = "ten";
	mapThingy[Rank::jack] = "jack";
	mapThingy[Rank::queen] = "queen";
	mapThingy[Rank::king] = "king";
	mapThingy[Rank::ace] = "ace";
	return mapThingy[r];
}

/*
###	TO-DO LIST	###
This function is not really working as it should. Need to look closer at how to fix it later.
*/
bool Card::isValid() {
	if ((&s && &r) != NULL) {
		return true;
	}
	else {
		return false;
	}
}
string Card::toString() {
	if (isValid()) {
		return rank() + " of " + suit();
	}
	else {
		return "Ugyldig kort";
	}
}
string Card::toStringShort() {
	if (isValid()) {
		return suit().substr(0, 1) + to_string(int(r));
	}
	else {
		return "Ugyldig kort";
	}
}