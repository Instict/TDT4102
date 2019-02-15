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
	for (int i = 0; i < vectorInput.size(); i++) {
		writeFile << i+1 << ": " << vectorInput[i] << endl;
	}
	writeFile.close();
}
void readFromFile(string fileName) {
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