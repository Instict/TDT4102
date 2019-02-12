#pragma once
#include "std_lib_facilities.h"

enum class Suit {
	hearts,
	diamonds,
	clubs,
	spades
};

enum class Rank {
	two = 2,
	three,
	four,
	five,
	six,
	seven,
	eight,
	nine,
	ten,
	jack,
	queen,
	king,
	ace
};


struct CardStruct {
	Suit s;
	Rank r;
};

class Card {
private:
	Suit s;
	Rank r;
	bool valid;
public:
	Card();						//	constructor
	Card(Suit suit, Rank rank);	//	overloaded constructor
	string suit();				//	member function
	string rank();				//	member function
	bool isValid();				//	member function
	string toString();			//	member function
	string toStringShort();		//	member function
};

void toString(CardStruct cardInput);
string suitToString(Suit stringInput);
string rankToString(Rank rank);
string toStringShort(CardStruct cardInput);