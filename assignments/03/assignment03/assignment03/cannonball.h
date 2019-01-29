#pragma once

//	part 1
double acclY();
double acclX();
double velY(double initVelocityY, double time);
double posX(double initPosition, double initVelocity, double time);
double posY(double initPosition, double initVelocity, double time);
void printTime(double sekunder);
double flightTime(double initVelocityY);

//	part 2
void getUserInput(double& theta, double& absVelocity);
double degToRad(double deg);
double getVelocityX(double theta, double absVelocity);
double getVelocityY(double theta, double absVelocity);
void getVelocityVector(double theta, double absVelocity, double& velocityX, double& velocityY);
double getDistanceTraveled(double velocityX, double velocityY);
double targetPractice(double distanceToTarget, double velocityX, double velocityY);