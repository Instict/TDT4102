#include "std_lib_facilities.h"
#include "utilities.h"



int randomWithLimits(int maks, int min) {
	return (rand() % (maks - min + 1) + min);
}
