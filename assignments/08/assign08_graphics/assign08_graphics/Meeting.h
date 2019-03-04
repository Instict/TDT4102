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
	static set<const Meeting*> meetings;
public:
	Meeting();
	~Meeting();
	Meeting(int day, int startTime, int endTime, Campus location, string subject, Person* leader);
	friend ostream& operator<<(ostream& osThingy, const Campus& p);
	int getDay() const;
	int getStartTime() const;
	int getEndTime() const;
	Campus getLocation() const;
	string getSubject() const;
	const Person* getLeader() const;
	void addParticipant(Person* participant);
	vector<string> getParticipantList() const;
};


ostream& operator<<(ostream& osThingy, const Meeting& p);