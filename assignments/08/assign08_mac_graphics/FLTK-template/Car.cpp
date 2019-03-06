#include "Car.h"
#include "std_lib_facilities.h"



Car::Car(){

}

Car::Car(int freeSeats) : freeSeats{ freeSeats } {}
	
bool Car::hasFreeSeats() const {
	if (!freeSeats) {
		return false;
	}
	else {
		return true;
	}
}

void Car::reserveFreeSeat() {
	if (hasFreeSeats()) {
		freeSeats--;
	}
	else {
		cout << "No free seats" << endl;
	}
}

int Car::getFreeSeats() {
	return freeSeats;
}