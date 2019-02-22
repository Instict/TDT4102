#include "tests.h"
#include "std_lib_facilities.h"
#include "utilities.h"
#include "CourseCatalog.h"
#include "Temperatures.h"

const int set_width = 25;

void testIsMac() {
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
}
void testReadAndWriteThingy() {
	cout << "###" << setw(set_width) << "testReadAndWriteThingy" << setw(set_width) << "###" << endl;

	string grunnlovLatin = "grunnlov_iso-latin-1.txt";
	string grunnlov = "grunnlov.txt";
	string temperatures = "temperatures.txt";
	string nefa = "nefa2.txt";
	string randomText("Definer en funksjon som leser fra en tekstfil,\n"
		"og lager en ny fil med den samme teksten\n"
		"og har linjenummer som forste tegn i hver linje.\n"
		"Sorg for at programmet ditt sjekker for\n"
		"vanlige feil som at filen ikke eksisterer.");

	/*
	Overloaded function
	*/
	writeToFile("exampleText.txt", randomText);
	readFromFile("exampleText.txt",false);

	writeToFile("userText.txt");
	readFromFile("userText.txt",false);
}

void testReadAndLineNumbers() {
	cout << "###" << setw(set_width) << "testReadAndLineNumbers" << setw(set_width) << "###" << endl;

	readFromFile("ThisFileDoesNotExist.txt",false);

	vector<string> comeOnFeelTheNoise;

	readFromFile("old_exampleText.txt", comeOnFeelTheNoise);
	writeToFile("new_exampleText.txt", comeOnFeelTheNoise);
	readFromFile("new_exampleText.txt",false);
}

void testCountConstitution() {
	cout << "###" << setw(set_width) << "testCountConstitution" << setw(set_width) << "###" << endl;

	countChar("ThisFileDoesNotExist.txt", 'a', 'z');
	countChar("grunnlov_iso-latin-1.txt", 'a', 'z');

	countChar("grunnlov.txt", 'F', 'Z');
}

void testAddCourses() {
	cout << "###" << setw(set_width) << "testAddCourses" << setw(set_width) << "###" << endl;

	CourseCatalog newStudent;
	newStudent.addCourse("1", "First course");
	newStudent.addCourse("2", "Second course");
	newStudent.addCourse("3", "Third course");
	cout << "new student get a course" << endl;
	cout << newStudent.getCourse("2") << endl;

	CourseCatalog anotherStudent;
	anotherStudent.testAddCourses();
	cout << "another student get a course" << endl;
	cout << anotherStudent.getCourse("TDT4110") << endl;
	anotherStudent.removeCourse("TDT4110");
	cout << "after erase" << endl;
	cout << anotherStudent.getCourse("TDT4110") << endl;

}
void testOperator() {
	cout << "###" << setw(set_width) << "testOperator" << setw(set_width) << "###" << endl;

	CourseCatalog freshStudent;
	freshStudent.testAddCourses();

	cout << freshStudent;
	//freshStudent.removeCourse("TDT4102");
	//cout << "Removing course " << endl;
	cout << "Change TDT4102" << endl;
	freshStudent.addCourse("TDT4102", "C++");
	cout << freshStudent;
	/*
	freshStudent.addCourseInsert("TDT4102", "B++");
	cout << freshStudent;
	*/

}
void testWriteToFile() {
	cout << "###" << setw(set_width) << "testWriteToFile" << setw(set_width) << "###" << endl;

	string fileName = "03_strangeStudent.txt";
	string pathToFile = "tekst\\";

	CourseCatalog strangeStudent;
	strangeStudent.testAddCourses();
	strangeStudent.addCourse("1", "First course");
	strangeStudent.addCourse("2", "Second course");
	strangeStudent.addCourse("3", "Third course");
	strangeStudent.writeToFiles(fileName);
	cout << strangeStudent;
	readFromFile("03_strangeStudent.txt", false);

}

void testReadFromFile() {
	cout << "###" << setw(set_width) << "testReadFromFile" << setw(set_width) << "###" << endl;
	CourseCatalog freshStudent;
	freshStudent.readFromFiles("03_strangeStudent.txt");
	cout << freshStudent;
}
void testReadTemperatures() {
	cout << "###" << setw(set_width) << "testReadTemperatures" << setw(set_width) << "###" << endl;

	Temperatures newTemp("temperatures.txt");
	newTemp.printTemps();

}
