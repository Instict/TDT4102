#include "std_lib_facilities.h"
#include "utilities.h"

void startRandomThingy() {
	srand(static_cast<unsigned int>(time(nullptr)));

}

int randomWithLimits(int maks, int min) {
	return (rand() % (maks - min + 1) + min);
}

