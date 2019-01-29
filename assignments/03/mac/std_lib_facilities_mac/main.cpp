#include "cannonball.h"
#include "part01.h"
#include "part02.h"
#include "part03.h"
#include "menu.h"
#include "std_lib_facilities.h"
#include "utilities.h"

void testDeviation(double compareOperand, double toOperand, double maxError, string name);
void testError(int min, int maks, int iterations);

int main(){
	srand(static_cast<unsigned int>(time(nullptr)));
	/*
	double maxError = 0.0001;
	testDeviation(posX(0.0, 50.0, 5.0), 250.0, maxError, "posX(0.0,50.0,5.0)");
	int min = 100;
	int maks = 1000;
	int iterations = 100000;
	testError(min, maks, iterations);
	*/

	awesomeMenuComingUp();

	return 0;
}




void testError(int min, int maks, int iterations) {
	int error = 0;
	int ranNum;
	for (int i = 0; i < iterations; i++) {
		ranNum = randomWithLimits(maks, min);
		cout << "ran: " << ranNum << endl;
		if (ranNum > maks || ranNum < min) {
			cout << "error" << endl;
			error++;
		}
	}
	cout << "amount of error: " << error << endl;
}


void testDeviation(double compareOperand, double toOperand, double maxError, string name) {
	if ((abs(compareOperand) - abs(toOperand)) < maxError) {
		cout << "test ok for " << name << endl;
	}
	else {
		cout << "test NOT ok for " << name << endl;
	}
}
