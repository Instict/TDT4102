#include "std_lib_facilities.h"
#include "utilities.h"



int randomWithLimits(int maks, int min) {
	return (rand() % (maks - min + 1) + min);
}

int incrementByValueNumTimes(int startValue, int increment, int numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
	return startValue;
}


void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes){
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
}

/*
Probably need to tune this function. The solution does not seem to be right, even
if I seem to find the correct values. Probably a better way to do this.
## FIND AN ALTERNATIVE WAY TO DO THIS FUNCTION ##
Using reference is probably better, since this function should not return any values.
Probably better to change the value of the variables instead of just copying them.
*/
void swapNumbers(int& firstNum, int& secondNum) {
	int thisFirst = firstNum;
	int thisSecond = secondNum;
	firstNum = thisSecond;
	secondNum = thisFirst;
}


vector<int> randomizeVector() {

}