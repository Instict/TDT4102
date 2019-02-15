#include "std_lib_facilities.h"
#include "utilities.h"

string pathToFile;

void isMac(bool isMac) {
	if (isMac) {
		pathToFile = "";
	}
	else {
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

void writeToFileUserInput(string fileName) {
	ofstream writeFile;
	string userInput;
	writeFile.open(pathToFile + fileName);
	do {
		cout << fileName << endl;
		getUserString(userInput);
		if (userInput != "quit") {
			writeFile << userInput;
			writeFile.close();
		}
	} while (userInput != "quit");
}
void writeToFile(string fileName, string inputFrom) {
	ofstream writeFile;
	cout << fileName << endl;
	writeFile.open(pathToFile + fileName);			
	writeFile << inputFrom;
	writeFile.close();
}
void readFromFile(string fileName) {
	ifstream readFile;
	string line;
	cout << fileName << endl;
	readFile.open(pathToFile + fileName);
	while (readFile) {
		getline(readFile, line);
		cout << line << endl;

	}
	readFile.close();
}