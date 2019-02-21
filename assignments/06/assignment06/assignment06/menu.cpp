#include "tests.h"
#include "std_lib_facilities.h"
#include "menu.h"

void awesomeMenuComingUp() {
	int user_input;
	do {
		cout << "\nChoose function:\n"
			"0)Avslutt\n"
			"1)Task 1 - read and write to file\n"
			"2)Task 2 - character statistics\n"
			"3)Task 3 - Course catalog\n"
			"4)Task 4 - structured file\n"
			"User choice: ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; task01(); cout << endl; break;
		case 2: cout << endl; task02(); cout << endl; break;
		case 3: cout << endl; task03(); cout << endl; break;
		case 4: cout << endl; task04(); cout << endl; break;
		}

	} while (!(user_input == 0));
}
void task01() {
	int user_input;
	do {
		cout << "\nChoose function:\n"
			"0)...back\n"
			"1)testReadAndWriteThingy\n"
			"2)testReadAndLineNumbers\n"
			"User choice: ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testReadAndWriteThingy(); cout << endl; break;
		case 2: cout << endl; testReadAndLineNumbers(); cout << endl; break;
		}

	} while (!(user_input == 0));
}
void task02() {
	int user_input;
	do {
		cout << "\Choose function:\n"
			"0)...back\n"
			"1)testCountConstitution\n"
			"User choice: ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testCountConstitution(); cout << endl; break;
		}

	} while (!(user_input == 0));
}
void task03() {
	int user_input;
	do {
		cout << "\Choose function:\n"
			"0)...back\n"
			"1)testAddCourses\n"
			"2)testOperator\n"
			"3)testWriteToFile\n"
			"4)testReadFromFile\n"
			"User choice: ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testAddCourses(); cout << endl; break;
		case 2: cout << endl; testOperator(); cout << endl; break;
		case 3: cout << endl; testWriteToFile(); cout << endl; break;
		case 4: cout << endl; testReadFromFile(); cout << endl; break;
		}

	} while (!(user_input == 0));
}
void task04() {
	int user_input;
	do {
		cout << "\Choose function:\n"
			"0)...back\n"
			"1)testReadTemperatures\n"
			"User choice: ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testReadTemperatures(); cout << endl; break;
		}

	} while (!(user_input == 0));
}