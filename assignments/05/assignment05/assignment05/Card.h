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

string suitToString(Suit stringInput);
string rankToString(Rank rank);