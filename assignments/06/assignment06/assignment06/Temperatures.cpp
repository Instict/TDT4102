#include "Temperatures.h"


string pathFiles;
Temperatures::Temperatures(){
	
}
Temperatures::Temperatures(string fileName) {
	loadTemps(fileName);
}

istream& operator>>(istream & is, Temps& t){
	is >> t.max;
	is >> t.min;
	return is;
}


void Temperatures::loadTemps(string fileName){
	ifstream temp_file{ pathFiles + fileName };
	Temps t2;
	while (temp_file >> t2) {
		vectorThingy.push_back(t2);
	}
}

void Temperatures::printTemps() {
	for (int i = 0; i < int(vectorThingy.size()); i++)
	{
		cout << vectorThingy[i].min << " : " << vectorThingy[i].max << endl;
	}
}

void isMacTemperatures(bool isMac) {
	if (isMac) {
		return;
	}
	else {
		pathFiles = "tekst\\";
	}
}
