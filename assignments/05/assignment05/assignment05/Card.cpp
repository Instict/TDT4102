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