#include "tests.h"
#include "Car.h"
#include "std_lib_facilities.h"
#include "Person.h"


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

void testPersonAndCar() {
	Person firstRandom("Ola Normann", "ola@normann.no", nullptr);
	cout << firstRandom << endl;

	Car caravan(4);
	Person secondRandom("Kari Normann", "kari@normann.no", &caravan);
	cout << secondRandom << endl;

	secondRandom.setName("Karl Normann");
	cout << secondRandom << endl;
}