#include "std_lib_facilities.h"
#include "utilities.h"
#include "CourseCatalog.h"
#include "Temperatures.h"
string pathToFile;

void isMac(bool isMac) {
	isMacCourseCatalog(isMac);
	isMacTemperatures(isMac);
	if (isMac) {
		cout << "pathToFile changed to nothing" << endl;
		pathToFile = "";
	}
	else {
		cout << "pathTofile changed to tekst\\" << endl;
		pathToFile = "tekst\\";
	}
}
void initAssignment() {
	startNorwegianThingy();
	startRandomThingy();
}
void startNorwegianThingy() {
	setlocale(LC_ALL, "norwegian");
}
void startRandomThingy() {
	srand(static_cast<unsigned int>(time(nullptr)));

}

int randomWithLimits(int maks, int min) {
	return (rand() % (maks - min + 1) + min);
}

void getUserString(string& userInput) {
	cout << "Input: ";
	getline(cin, userInput);
	cout << endl;
}

void writeToFile(string fileName) {
	ofstream writeFile;
	string userInput;
	writeFile.open(pathToFile + fileName);
	do {
		cout << "Writing to: " << fileName << endl;
		getUserString(userInput);
		if (userInput != "quit") {
			writeFile << userInput << endl;
			writeFile.close();
		}
	} while (userInput != "quit");
}

/*
Overload function
*/
void writeToFile(string fileName, string stringInput) {
	ofstream writeFile;
	cout << "Writing to: " << fileName << endl;
	writeFile.open(pathToFile + fileName);
	writeFile << stringInput << endl;
	writeFile.close();
}
void writeToFile(string fileName, vector<string>& vectorInput) {
	ofstream writeFile;
	cout << "Writing to: " << fileName << endl;
	writeFile.open(pathToFile + fileName);
	for (unsigned int i = 0; i < vectorInput.size(); i++) {
		writeFile << i + 1 << ": " << vectorInput[i] << endl;
	}
	writeFile.close();
}


void readFromFile(string fileName, bool count) {
	ifstream readFile;
	string line;
	cout << fileName << endl;
	readFile.open(pathToFile + fileName);
	if (readFile.fail()) {
		cout << fileName << " does not exist" << endl;
		return;
	}
	while (readFile) {
		getline(readFile, line);
		cout << line << endl;

	}
	readFile.close();
}
/*
Overload function
*/
void readFromFile(string fileName, vector<string>& letsTryThis) {
	ifstream readFile;
	string line;
	cout << fileName << endl;
	readFile.open(pathToFile + fileName);
	if (readFile.fail()) {
		cout << fileName << " does not exist" << endl;
		return;
	}
	while (readFile) {
		getline(readFile, line);
		cout << line << endl;
		letsTryThis.push_back(line);
	}
	readFile.close();
}

int countChar(string thisIsTheString, char thisIsTheChar) {
	int counter = 0;
	for (unsigned int i = 0; i < thisIsTheString.size(); i++) {
		if ((tolower(thisIsTheString[i]) == thisIsTheChar) || (toupper(thisIsTheString[i]) == thisIsTheChar)) {
			counter++;
		}
	}
	return counter;
}



void countChar(string fileName, char firstChar, char lastChar) {
	if (firstChar < 'a' || lastChar < 'a') {
		cout << endl << "First character : " << firstChar << " : " << "Second character " << lastChar << endl;
		if (firstChar < 'a') {
			cout << "Changed first character: " << firstChar;
			firstChar += 32;
			cout << " to " << firstChar << endl;
		}
		if (lastChar < 'a') {
			cout << "Changed second character: " << lastChar;
			lastChar += 32;
			cout << " to " << lastChar << endl;
		}

	}
	//	vector with same length as characters
	vector<int> charsCounted(lastChar - firstChar + 1);
	ifstream readFile{ pathToFile + fileName };
	string wordInText;

	if (readFile.fail()) {
		cout << endl << fileName << " does not exist" << endl;
		return;
	}
	while (readFile >> wordInText) {
		for (unsigned int i = 0; i < wordInText.length(); i++) {
			char letterInAlphabet = tolower(wordInText[i]);

			if (letterInAlphabet >= firstChar && letterInAlphabet <= lastChar) {
				charsCounted[tolower(wordInText[i]) - firstChar]++;
			}
		}
	}
	int dummyCounter = 0;
	cout << endl << "Counting letters " << firstChar << " to " << lastChar << " in " << fileName << endl;
	for (unsigned int i = 0; i < charsCounted.size(); i++) {
		cout << char(i + firstChar) << ": " << left << setw(5) << charsCounted[i] << right << setw(6);
		dummyCounter++;
		if (dummyCounter > 4) {
			cout << setw(0) << endl;
			dummyCounter = 0;
		}
	}
	cout << endl;
}
