#include "tests.h"
#include "Car.h"
#include "std_lib_facilities.h"
#include "Person.h"
#include "Meeting.h"

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

void testMeetingAndOperator() {
	Car kariCar(3);
	Car olaCar(2);
	Car hansCar(0);


	Person leader("Ola Normann", "ola@norman.no", &olaCar);
	Person perKari("Kari Normann", "kari@normann.no", &kariCar);
	Person perHans("Hans Normann", "hans@normann.no", &hansCar);

	int day = 1;
	int startTime = 10;
	int endTime = 12;
	Campus location = Campus::Gloshaugen;
	string subject = "First meeting";

	Meeting m(day, startTime, endTime, location, subject, &leader);


	m.addParticipant(&leader);
	m.addParticipant(&perKari);
	m.addParticipant(&perHans);
	cout << "---" << endl;
	cout << m << endl;
}