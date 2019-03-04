#pragma once
#include "std_lib_facilities.h"
#include "Person.h"


enum class Campus {
	Dragvoll,
	Kalvskinnet,
	Tunga,
	Oya,
	Gloshaugen,
};


class Meeting{
private:
	int day, startTime, endTime;
	Campus location;
	string subject;
	const Person* leader;
	set<const Person*> participants;
public:
	Meeting();
	~Meeting();
	friend ostream& operator<<(ostream& osThingy, const Campus& p);
	int getDay();
	int getStartTime();
	int getEndTime();
	Campus getLocation();
	string getSubject();
	Person* getLeader();
	void addParticipant(Person* participant);
};

