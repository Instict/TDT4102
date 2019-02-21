#pragma once
#include "std_lib_facilities.h"

struct Temps{
public:
	Temps();
	double max;
	double min;
};

istream& operator>>(istream& is, Temps& t);