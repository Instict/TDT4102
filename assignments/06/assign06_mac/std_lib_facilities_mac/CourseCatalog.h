#pragma once
#include "std_lib_facilities.h"


class CourseCatalog {
private:
	map<string, string> coursesInAcademy;
public:
	CourseCatalog();
    friend ostream& operator<<(ostream&, const CourseCatalog&);    //    print all course
	void addCourse(string courseCode, string courseName);
	void removeCourse(string courseCode);
	string getCourse(string courseCode);
	void testAddCourses();
	void writeToFiles(string fileName);
	void readFromFiles(string fileName);

};

void isMacCourseCatalog(bool isMac);
