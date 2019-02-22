#include "std_lib_facilities.h"
#include "utilities.h"
#include "CourseCatalog.h"

string pathToFiles;
CourseCatalog::CourseCatalog() {
	
}

void CourseCatalog::addCourse(string courseCode, string courseName) {
	coursesInAcademy[courseCode] = courseName;
}

string CourseCatalog::getCourse(string courseCode) {
	return coursesInAcademy[courseCode];
}

void CourseCatalog::removeCourse(string courseCode) {
	coursesInAcademy.erase(courseCode);
}
void CourseCatalog::testAddCourses() {
	coursesInAcademy["TDT4110"] = "Informasjonsteknologi grunnkurs";
	coursesInAcademy["TDT4102"] = "Prosedyre- og objektorientert programmering";
	coursesInAcademy["TMA4100"] = "Matematikk 1.";

}

ostream& operator<<(ostream& ostreamThingy, const CourseCatalog& courseCatalogThingy){
	for (auto& pair : courseCatalogThingy.coursesInAcademy) {
		ostreamThingy  << pair.first << " - " << pair.second << endl;
	}
	return ostreamThingy;
}

void CourseCatalog::readFromFiles(string fileName) {
	ifstream readFile{ pathToFiles + fileName };
	string line;
	cout << fileName << endl;
	if (readFile.fail()) {
		cout << fileName << " does not exist" << endl;
		return;
	}
	while (readFile) {
		getline(readFile, line);
		string courseCode = line.substr(0, line.find("-"));
		string courseName = line.substr(line.find("-") + 1);
		addCourse(courseCode, courseName);
	}
	readFile.close();
}


void CourseCatalog::writeToFiles(string fileName) {
	ofstream ostreamThingy { pathToFiles + fileName };
	if (!ostreamThingy) {
		cout << "error, cant open " << fileName << endl;
	}
	for (auto pair : coursesInAcademy) {
		ostreamThingy << pair.first << " - " << pair.second << endl;
	}
}


void isMacCourseCatalog(bool isMac) {
	if (isMac) {
		return;
	}
	else {
		pathToFiles = "tekst\\";
	}
}
