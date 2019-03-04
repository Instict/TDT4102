#pragma once
#include "std_lib_facilities.h"
#include "Car.h"


class Person{
private:
	string name, email;
	Car* car;
public:
	Person();
	Person(string name, string email, Car* car);
	~Person();
	string getName() const;
	string getEmail() const;
	void setName(string name);
	void setEmail(string email);
	bool hasAvailableSeats() const;
	friend ostream& operator<<(ostream& osThingy, const Person& p);
};

