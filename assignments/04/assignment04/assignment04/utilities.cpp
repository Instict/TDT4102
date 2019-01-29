#include "std_lib_facilities.h"
#include "utilities.h"



int randomWithLimits(int maks, int min) {
	return (rand() % (maks - min + 1) + min);
}

int incrementByValueNumTimes(int startValue, int increment, int numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
	return startValue;
}