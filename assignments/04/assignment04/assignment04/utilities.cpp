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


void randomizeVector(vector<int>& vectorInt, int n) {
	int max = 100;
	int min = 0;
	for (int i = 0; i < n; i++) {
		vectorInt.push_back(randomWithLimits(max, min));
	}
}

void getIntFromUser(int& inFromUser) {
	cin >> inFromUser;
	cout << endl;
}

/*
Implementation of insertion-sort algorithm
*/
void sortVector(vector<int>& sortThisVector) {
	int i = 1;
	int j;
	while (i < sortThisVector.size()) {
		j = i;
		while (j > 0 && sortThisVector[j - 1] > sortThisVector[j]) {
			swapNumbers(sortThisVector[j], sortThisVector[j - 1]);
				j -= 1;
		}
		i += 1;
	}
}

int medianOfVector(vector<int> medianThingOfThisThingy) {
	if (isEven(medianThingOfThisThingy.size())) {
		int k = medianThingOfThisThingy.size() / 2;
		return (medianThingOfThisThingy[k] + medianThingOfThisThingy[k - 1]) / 2;
	}
	else {
		return medianThingOfThisThingy[medianThingOfThisThingy.size() / 2];
	}
}

bool isEven(int heltall) {
	if (heltall % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}