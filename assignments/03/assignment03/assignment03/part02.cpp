#include "part02.h"
#include "std_lib_facilities.h"
#include "cannonball.h"

void part02() {
	double theta = degToRad(45);
	double absVelocity = 150;
	double velocityX, velocityY;
	double distanceToTarget;

	//	referanse theta, absVelocity
	getUserInput(theta, absVelocity);
	//	referanse velocityX, velocityY
	getVelocityVector(theta, absVelocity, velocityX, velocityY);
	//	velocity vector, math. Skulle denne ligget i getVelocityVector?
	double velocityVector = sqrt(pow(velocityX, 2) + pow(velocityY, 2));
	cout << "Distance target: ";
	cin >> distanceToTarget;
	cout << endl;
	cout << "Flight time: " << flightTime(velocityY) << "s" << endl;
	cout << "velocity vector: " << velocityVector << endl;
	cout << "velocityX: " << velocityX << setw(10) << "\nvelocityY: " << velocityY << endl;
	cout << "target to hit: " << distanceToTarget << " meters" << endl;
	cout << "total distance traveled: " << getDistanceTraveled(velocityX, velocityY) << " meters" << endl;
	cout << "difference between target and traveled: " << targetPractice(distanceToTarget, velocityX, velocityY) << " meters" << endl;

}