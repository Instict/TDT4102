#pragma once
#include "std_lib_facilities.h"

typedef struct {
	double max, min;
} Temps;


class Temperatures{
	friend istream& operator>>(istream& is, Temps& t);
public:
	Temperatures();
	Temperatures(string fileName);
	vector<Temps> vectorThingy;
	void loadTemps(string fileName);
	void printTemps();
};
void isMacTemperatures(bool isMac);