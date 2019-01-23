#include "cannonball.h"
#include "part01.h"
#include "std_lib_facilities.h"

void testDeviation(double compareOperand, double toOperand, double maxError, string name);

int main(){
	//part01();
	double maxError = 0.0001;
	testDeviation(posX(0.0, 50.0, 5.0), 250.0, maxError, "posX(0.0,50.0,5.0)");
	//getUserInput();
	return 0;
}

void testDeviation(double compareOperand, double toOperand, double maxError, string name) {
	if ((abs(compareOperand) - abs(toOperand)) < maxError) {
		cout << "test ok for " << name << endl;
	}
	else {
		cout << "test NOT ok for " << name << endl;
	}
}
