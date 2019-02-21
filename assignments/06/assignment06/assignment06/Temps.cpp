#include "Temps.h"


string filePath;

Temps::Temps(){
	max = 0;
	min = 0;
}


istream& operator>>(istream& is, Temps& t) {
	Temps tt;
	cout << "operator overload" << endl;
	is >> t.max;
	is >> t.min;
	return is;
}


vector<Temps> tempsObjects() {
	vector<Temps> tempsVectorThingy;
	ifstream temp_file{ filePath + "temperatures.txt" };
	Temps t;
	temp_file >> t;
	tempsVectorThingy.push_back(t);
	return tempsVectorThingy;
}



/*

ostream& operator<<(ostream& ostreamThingy, const CourseCatalog& courseCatalogThingy) {
	for (const auto pair : courseCatalogThingy.coursesInAcademy) {
		ostreamThingy << pair.first << " - " << pair.second << endl;
	}
	return ostreamThingy;
}

*/
void isMacTemps(bool isMac) {
	if (isMac) {
		return;
	}
	else {
		filePath = "tekst\\";
	}
}