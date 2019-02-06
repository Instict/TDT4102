#pragma once

#include "std_lib_facilities.h"

int randomWithLimits(int maks, int min);
int incrementByValueNumTimes(int startValue, int increment, int numTimes);
void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes);
void swapNumbers(int& firstNum, int& secondNum);
void randomizeVector(vector<int>& vectorInt, int n);
void getIntFromUser(int& numbers);
void sortVector(vector<int>& sortThisVector);
int medianOfVector(vector<int> medianThingOfThisThingy);
bool isEven(int heltall);
string randomizeString(int sizeOfThisThingy, int max, int min);
string readInputToString(int nLength);
int countChar(string thisIsTheString, char thisIsTheChar);

double averageGrading(string stringOfStuff, int letterA, int letterF, int iterations);