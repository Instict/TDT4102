#define _USE_MATH_DEFINES
#include "cannonball.h"
#include "std_lib_facilities.h"
#include <math.h>

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
	//	do something here?
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
	// do something here
}

double getDistanceTraveled(double velocityX, double velocityY) {
	//	do something here
	return NULL;
}

double targetPractice(double distanceToTarget, double velocityX, double velocityY) {
	//	do something here
	return NULL;
}