#include "part01.h"
#include "std_lib_facilities.h"
#include "cannonball.h"

void part01() {
	double time = 0.0;
	double initPosition = 0.0;
	double initVelocityY = 25.0;
	double initVelocityX = 50.0;
	int set_precision = 4;
	int set_w = 7;

	cout << "velX:";
	for (int i = 0; i < 3; i++) {
		cout << setprecision(set_precision) << setw(set_w) << initVelocityX;
		time += 2.5;
	}
	cout << endl;
	cout << "velY:";
	time = 0.0;
	for (int i = 0; i < 3; i++) {
		cout << setprecision(set_precision) << setw(set_w) << velY(initVelocityY, time);
		time += 2.5;
	}
	cout << endl;
	cout << "posX:";
	time = 0.0;
	for (int i = 0; i < 3; i++) {
		cout << setprecision(set_precision) << setw(set_w) << posX(initPosition, initVelocityX, time);
		time += 2.5;
	}
	cout << endl;
	cout << "posY:";
	time = 0.0;
	for (int i = 0; i < 3; i++) {
		cout << setprecision(set_precision) << setw(set_w) << posY(initPosition, initVelocityY, time);
		time += 2.5;
	}
	cout << endl;
}