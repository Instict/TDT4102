#include "tests.h"
#include "Car.h"
#include "std_lib_facilities.h"



void testReserveSeats() {
	int seats = 2;
	Car sportsCar(seats);
	for (int i = 0; i <= seats; i++) {
		cout << "Are there any free seats?:(T/F) " << sportsCar.hasFreeSeats() << endl;
		cout << "How many free seats?: " << sportsCar.getFreeSeats() << endl;
		cout << "I would like to reserve a seat: " << endl;
		sportsCar.reserveFreeSeat();
	}
}