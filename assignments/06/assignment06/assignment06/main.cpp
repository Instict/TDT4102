#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"

int main(){
	initAssignment();
	isMac(false);
	/*
	ofstream myFile;
	string pathToFile = "tekst\\";
	string inUser;
	myFile.open(pathToFile + "example2.txt");
	cout << "Write text: ";
	getline(cin, inUser);
	cout << endl;
	myFile << inUser;
	myFile.close();

	
	cout << inUser << endl;
	*/

	//writeToFileUserInput("nefa2.txt");
	string grunnlovLatin = "grunnlov_iso-latin-1.txt";
	string grunnlov = "grunnlov.txt";
	string temperatures = "temperatures.txt";
	string nefa = "nefa2.txt";

	readFromFile(nefa);

	return 0;
}