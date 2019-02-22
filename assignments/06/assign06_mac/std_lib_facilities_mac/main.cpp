#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "menu.h"
#include "Temperatures.h"

int main(){
	initAssignment();
	//isMac(false);
	testIsMac();

	awesomeMenuComingUp();

	//testReadTemperatures();

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
	return 0;
}
