#define _USE_MATH_DEFINES
#include "cannonball.h"
#include "std_lib_facilities.h"
#include <math.h>
#include "utilities.h"


//	part 1
double acclY() {
	double accelerationYasDouble = -9.81;
	return accelerationYasDouble;
}
double acclX() {
	double accelerationYasDouble = 0.0;
	return accelerationYasDouble;
}

double velY(double initVelocityY, double time) {
	double velocityY = initVelocityY + acclY()*time;
	return velocityY;
}

double posX(double initPosition, double initVelocity, double time) {
	double acceleration = acclX();
	double position = initPosition + initVelocity * time + (acceleration*pow(time, 2)) / 2;
	return position;
}
double posY(double initPosition, double initVelocity, double time) {
	double acceleration = acclY();
	double position = initPosition + initVelocity * time + (acceleration*pow(time, 2)) / 2;
	return position;
}

void printTime(double parameter) {
	double days = 0;
	double hours = 0;
	double minutes = 0;
	double seconds = 0;

	days = parameter / (24 * 3600);
	hours = parameter / 3600;
	minutes = (int)parameter % 3600 / 60;
	seconds = (int)parameter % 60;

	if (days > 0) {
		cout << days << " dager, ";
	}
	if (hours > 0) {
		cout << hours << " timer, ";
	}
	if (hours == 0 && days > 0) {
		cout << hours << " timer, ";
	}
	if (minutes > 0) {
		cout << minutes << " minutter, ";
	}
	if (minutes == 0 && hours > 0) {
		cout << minutes << " minutt, ";
	}
	cout << seconds << " sekunder!";
}


double flightTime(double initVelocityY) {
	double flightTime = (-2 * initVelocityY) / acclY();
	return flightTime;
}

//	part 2
// Ber brukeren om to tall, en vinkel (i grader) og en fart.
// Formålet er å endre verdien på argumentene.
// theta og absVelocity er referanser til objektene funksjonen kalles med.
void getUserInput(double& theta, double& absVelocity) {
	cout << "angle(degrees): ";
	cin >> theta;
	cout << "velocity: ";
	cin >> absVelocity;
	theta = degToRad(theta);
	cout << endl;
}

// Konverterer fra grader til radianer
double degToRad(double deg) {
	return (deg*M_PI) / 180.0;
}

// Returnerer henholdsvis farten i x-, og y-retning, gitt en vinkel
// theta og en absoluttfart absVelocity.
double getVelocityX(double theta, double absVelocity) {
	return absVelocity * cos(theta);
}
double getVelocityY(double theta, double absVelocity) {
	return absVelocity * sin(theta);
}

// Dekomponerer farten gitt av absVelocity, i x- og y-komponentene
// gitt vinkelen theta. Komponentene oppdateres gjennom referansene.
// med Vector i funksjonsnavnet tenker vi på vektor-begrepet i geometri
void getVelocityVector(double theta, double absVelocity, double& velocityX, double& velocityY) {
	velocityX = getVelocityX(theta, absVelocity);
	velocityY = getVelocityY(theta, absVelocity);
}

double getDistanceTraveled(double velocityX, double velocityY) {
	return posX(0, velocityX, flightTime(velocityY));
}

double targetPractice(double distanceToTarget, double velocityX, double velocityY) {
	return getDistanceTraveled(velocityX, velocityY) - distanceToTarget;
}
void playTargetPractice(int min, int maks, int iterations) {
	double theta, absVelocity;
	double velocityX, velocityY;
	int winner = 0;
	int target;
	target = randomWithLimits(maks, min);
	cout << "Target at: " << target << " meters" << endl;
	for (int i = iterations; i > 0; i--) {
		cout << i << " tries remaining" << endl;
		getUserInput(theta, absVelocity);
		getVelocityVector(theta, absVelocity, velocityX, velocityY);
		double velocityVector = sqrt(pow(velocityX, 2) + pow(velocityY, 2));
		cout << "Flight time: " << setprecision(2) << flightTime(velocityY) << " seconds" << endl;
		cout << "Target : " << target << " meters" << endl;
		cout << "You hit: " << setprecision(4) << getDistanceTraveled(velocityX, velocityY) << " meters" << endl;
		if (abs(targetPractice(target, velocityX, velocityY)) < 6) {
			cout << setprecision(2) << "HIT! HIT! " << abs(targetPractice(target, velocityX, velocityY)) << " meters hits the target!" << endl;
			cout << "Congratulation! You beat the game in " << iterations - i + 1 << " tries!" << endl;
			winner = 1;
			break;
		}
		else if (targetPractice(target, velocityX, velocityY) > 0) {
			cout << setprecision(4) << abs(targetPractice(target, velocityX, velocityY)) << " meters to far!" << endl;
		}
		else if (targetPractice(target, velocityX, velocityY) < 0) {
			cout << setprecision(4) << abs(targetPractice(target, velocityX, velocityY)) << " meters to short!" << endl;
		}
	}
	if (winner == 0) {
		cout << "You lost, lol" << endl;
	}
}
