#include "std_lib_facilities.h"
#include "utilities.h"
#include "menu.h"
#include "tests.h"
#include "mastermind.h"

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));
	playMastermind();
	//awesomeMenuComingUp();

	/*
	testVectorString() should be called from main, why?
	*/
}