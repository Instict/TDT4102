#include "cannonball.h"
#include "part01.h"
#include "std_lib_facilities.h"

void testDeviation(double compareOperand, double toOperand, double maxError, string name);

int main(){
	//part01();
	double maxError = 0.0001;
	//testDeviation(posX(0.0, 50.0, 5.0), 250.0, maxError, "posX(0.0,50.0,5.0)");
	//getUserInput();

	double theta = degToRad(45);
	double absVelocity = 150;
	double velocityX, velocityY;
	double distanceToTarget = 2000.0;

	//	referanse theta, absVelocity
	getUserInput(theta, absVelocity);
	//	referanse velocityX, velocityY
	getVelocityVector(theta, absVelocity, velocityX, velocityY);
	//	velocity vector, math. Skulle denne ligget i getVelocityVector?
	double velocityVector = sqrt(pow(velocityX, 2) + pow(velocityY, 2));
	
	cout << "Flight time: " << flightTime(velocityY) << "s" << endl;
	cout << "velocity vector: " << velocityVector << endl;
	cout << "velocityX: " << velocityX << setw(10) << "\nvelocityY: " << velocityY << endl;
	cout << "total distance traveled: " << getDistanceTraveled(velocityX, velocityY) << " meters" << endl;
	cout << "target practice: " << targetPractice(distanceToTarget, velocityX, velocityY) << endl;


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
