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
	cout << "Insertion-sort" << endl;
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

string randomizeString(int sizeOfThisThingy, int max, int min) {
	string dummyVariable;
	for (int i = 0; i < sizeOfThisThingy; i++) {
		dummyVariable.push_back(randomWithLimits(max, min));
	}
	return dummyVariable;
}


/*
This function was kinda confusing, what do they really want me to do here?
##	WORK IN PROGRESS	##
*/
string readInputToString(int nLength) {
	string thisString;
	do {
		cout << "Maximum " << nLength << " characters" << endl;
		cout << "Userinput: ";
		cin >> thisString;
		cout << endl;
	} while (!(thisString.size() == nLength));
	/*for (int i = 0; i < nLength; i++) {
		if (isalpha(thisString[i])) {
			cout << "isAlpha: " << thisString[i] << endl;
		}
		else if(isdigit(thisString[i])){
			cout << "isDigit: " << thisString[i] << endl;
		}
	}
	for (char& dummy : thisString) {
		dummy = toupper(dummy);
	}
	*/

	return thisString.substr(0, nLength);
}

int countChar(string thisIsTheString, char thisIsTheChar) {
	int counter = 0;
	for (int i = 0; i < thisIsTheString.size();i++) {
		if ((tolower(thisIsTheString[i]) == thisIsTheChar) || (toupper(thisIsTheString[i]) == thisIsTheChar)) {
			counter++;
		}
	}
	//cout << "countChar: " << counter << endl;
	return counter;
}

double averageGrading(string stringOfStuff, int letterA, int letterF, int iterations) {
	int dummyCounter = 0;
	double averageGrade = 0.0;
	cout << stringOfStuff << endl;
	for (char firstChar = letterA; firstChar <= letterF; firstChar++) {
		cout << firstChar << " : " << countChar(stringOfStuff, firstChar) << " time(s)" << endl;
		averageGrade += countChar(stringOfStuff, firstChar)*(5 - dummyCounter);
		dummyCounter++;
	}
	return averageGrade / iterations;
}

int checkCharacters(string firstString, string secondString) {
	int counter = 0;
	for (int i = 0; i < firstString.size(); i++) {
		if (firstString[i] == secondString[i]) {
			counter++;
		}
	}
	return counter;
}

/*
This function is not working properly. Sometimes it works, sometimes it return too many results.
###	Need to rewrite this function before delivery	###
*/
int checkCharactersAndPosition(string firstString, string secondString) {
	int counter = 0;
	for (int i = 0; i < firstString.size(); i++) {
		if (countChar(firstString, secondString[i]) > 0) {
			//cout << "first: " << firstString << " second: " << secondString[i] << endl;
			counter++;
		}
	}
	return counter;
}