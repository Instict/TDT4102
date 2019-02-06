#include "std_lib_facilities.h"
#include "utilities.h"
#include "menu.h"
#include "tests.h"


int main() {
	srand(static_cast<unsigned int>(time(nullptr)));

	awesomeMenuComingUp();
	int min = 100;
	int maks = 1000;
	int iterations = 100000;
	//testError(min, maks, iterations);
	//testString();
	//readInputToString(4);
	//testForCharInString();
	/*
	testVectorString() should be called from main, why?
	*/
}