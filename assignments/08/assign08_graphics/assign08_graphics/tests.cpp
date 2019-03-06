#include "tests.h"
#include "Car.h"
#include "std_lib_facilities.h"
#include "Person.h"
#include "Meeting.h"
#include "MeetingWindow.h"
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

void testCoDriving() {
	Car kariCar(3);
	Car olaCar(2);
	Car hansCar(0);
	Car emmaCar(2);

	Person leader("Ola Normann", "ola@norman.no", &olaCar);
	Person perKari("Kari Normann", "kari@normann.no", &kariCar);
	Person perHans("Hans Normann", "hans@normann.no", &hansCar);

	int day = 1;
	int startTime = 1000;
	int endTime = 1200;
	Campus location = Campus::Gloshaugen;
	string subject = "Is the earth really round?";

	Meeting m(day, startTime, endTime, location, subject, &leader);


	m.addParticipant(&perKari);
	m.addParticipant(&perHans);
	cout << "---" << endl;
	//cout << m << endl;



	Person leader2("Liam", "spam@spam.com", nullptr);
	Person olivia("Olivia", "spam@spam.com", nullptr);
	Person noah("Noah", "spam@spam.com", nullptr);
	Person emma("Emma", "spam@spam.com", &emmaCar);
	subject = "Does money grow on trees?";

	startTime = 1300;
	endTime = 1400;
	location = Campus::Gloshaugen;
	Meeting m2(day, startTime, endTime, location, subject, &leader2);

	m2.addParticipant(&olivia);
	m2.addParticipant(&olivia);
	m2.addParticipant(&noah);
	m2.addParticipant(&emma);
	//cout << m2 << endl;


	m.findPotentialCoDriving();
	m2.findPotentialCoDriving();
	for (auto name : m.findPotentialCoDriving()) {
		cout << name->getName() << " from: " << m.getSubject() << endl;
	}
	for (auto name : m2.findPotentialCoDriving()) {
		cout << name->getName() << " from: " << m2.getSubject() << endl;
	}
}

void testGUI() {
	using namespace Graph_lib;
	int width = 600;
	int height = 300;
	MeetingWindow newWindow({ 550,80 }, width, height, "Hello world!");

	gui_main();
}

void awesomeMenuComingUp() {
	int user_input;
	do {
		cout << "\nVelg funksjon:\n"
			"0)Avslutt\n"
			"1)testReserveSeats\n"
			"2)testPersonAndCar\n"
			"3)testMeetingAndOperator\n"
			"4)testCoDriving\n"
			"5)testGUI\n"
			"Angi valg: ";
		cin >> user_input;
		switch (user_input) {
		case 1: cout << endl; testReserveSeats(); cout << endl; break;
		case 2: cout << endl; testPersonAndCar(); cout << endl; break;
		case 3: cout << endl; testMeetingAndOperator(); cout << endl; break;
		case 4: cout << endl; testCoDriving(); cout << endl; break;
		case 5: cout << endl; testGUI(); cout << endl; break;
		}

	} while (!(user_input == 0));
}