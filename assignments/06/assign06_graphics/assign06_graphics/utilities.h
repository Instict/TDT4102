#pragma once

#include "std_lib_facilities.h"

/*
initialization
*/
void initAssignment();
void startNorwegianThingy();
void startRandomThingy();

int randomWithLimits(int maks, int min);
void writeToFile(string fileName);
void isMac(bool isMac);
void getUserString(string& userInput);
void readFromFile(string fileName, vector<string>& letsTryThis);
void readFromFile(string fileName, bool count);
void writeToFile(string fileName, string stringInput);
void writeToFile(string fileName, vector<string>& vectorInput);

int countChar(string thisIsTheString, char thisIsTheChar);
void countChar(string fileName, char firstChar, char lastChar);