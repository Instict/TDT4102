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

/*
Lag en ny funksjon incrementByValueNumTimesRef(), som gjør akkurat det samme som 
incrementByValueNumTimes(), men bruker referanse. Funksjonen skal ikke returnere noe. 
Lag en ny funksjon testCallByReference() som tester incrementByValueNumTimesRef() på 
tilsvarende måte som testCallByValue() tester incrementByValueNumTimes(). 
*/