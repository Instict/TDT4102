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

