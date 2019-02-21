#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "menu.h"

int main(){
	int userChoice;
	do {
		cout << "1) windows" << endl;
		cout << "2) mac" << endl;
		cout << "User choice: ";
		cin >> userChoice;
		cout << endl;
		if (userChoice == 1) {
			isMac(false);
			break;
		}
		if (userChoice == 2) {
			isMac(true);
			break;
		}
	} while (userChoice != 1);
	initAssignment();
	

	/*
	ifstream temp_file{ "tekst\\grunnlov.txt" };
	vector<string> t;
	string line;
	while(temp_file){
		getline(temp_file, line);
		t.push_back(line);
	}
	//temp_file >> t; // t.max = 3.14, t.min = -4.0
	for (int i = 0; i < t.size(); i++) {
		cout << t;
	}
	*/
	//testReadAndWriteThingy();
	//testReadAndLineNumbers();
	//testForCharInString();
	//readFromFile("grunnlov.txt", true);
	//testCountConstitution();
	//testAddCourses();
	//testOperator();
	//testWriteToFile();
	//testReadFromFile();
	//readFromFile("new_exampleText.txt", false);
	awesomeMenuComingUp();
	return 0;
}