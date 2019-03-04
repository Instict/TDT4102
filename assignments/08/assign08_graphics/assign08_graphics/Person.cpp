#include "Person.h"
#include "std_lib_facilities.h"
#include "Car.h"


Person::Person(){
}


Person::~Person(){
}

Person::Person(string name, string email, Car* car = nullptr) : 
	name{ name }, 
	email{ email }, 
	car{ car }
{}

string Person::getName() {
	return name;
}
string Person::getEmail() {
	return email;
}
void Person::setName(string name) {
	this->name = name;
}
void Person::setEmail(string email) {
	this->email = email;
}
bool Person::hasAvailableSeats() const {
	if (car != nullptr && car->hasFreeSeats()) {
		return true;
	}
	else {
		return false;
	}
}

ostream& operator<<(ostream& osThingy, const Person& p) {
	osThingy << "Name: " <<  p.name << endl;
	osThingy << "Email: " << p.email << endl;
	osThingy << "Car: " << p.hasAvailableSeats() << endl;
	return osThingy;
}
