#pragma once

int randomWithLimits(int maks, int min);
int incrementByValueNumTimes(int startValue, int increment, int numTimes);
void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes);
void swapNumbers(int& firstNum, int& secondNum);
void testVectorSorting();
/*
Lag en ny funksjon incrementByValueNumTimesRef(), som gjør akkurat det samme som 
incrementByValueNumTimes(), men bruker referanse. Funksjonen skal ikke returnere noe. 
Lag en ny funksjon testCallByReference() som tester incrementByValueNumTimesRef() på 
tilsvarende måte som testCallByValue() tester incrementByValueNumTimes(). 
*/