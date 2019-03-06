#include "Meeting.h"
#include "std_lib_facilities.h"
#include <math.h>

set<const Meeting*> Meeting::meetings;

Meeting::Meeting(){
}
Meeting::Meeting(int day, int startTime, int endTime, Campus location, string subject, Person* leader) :
	day{ day },
	startTime{ startTime },
	endTime{ endTime },
	location{ location },
	subject{ subject },
	leader{ leader }{
	meetings.emplace(this);
	addParticipant(leader);

}

Meeting::~Meeting() {
}


ostream& operator<<(ostream& osThingy, const Campus& p) {
	switch (p) {
	case Campus::Dragvoll:		osThingy << "Dragvoll";		break;
	case Campus::Gloshaugen:	osThingy << "Gløshaugen";	break;
	case Campus::Kalvskinnet:	osThingy << "Kalvskinnet";	break;
	case Campus::Oya:			osThingy << "Øya";			break;
	case Campus::Tunga:			osThingy << "Tunga";		break;
	}
	return osThingy;
}
int Meeting::getDay() const{
	return day;
}
int Meeting::getStartTime() const {
	return startTime;
}
int Meeting::getEndTime() const {
	return endTime;
}
Campus Meeting::getLocation() const {
	return location;
}
string Meeting::getSubject() const {
	return subject;
}
const Person* Meeting::getLeader() const {
	return leader;
}
void Meeting::addParticipant(Person* participant) {
	participants.emplace(participant);
}
set<const Person*> Meeting::getParticipants() const {
	return participants;
}

vector<string> Meeting::getParticipantList() const {
	vector<string> dummyString;
	for (const auto &name : participants) {
		dummyString.push_back(name->getName());
	}
	
	return dummyString;
}
ostream& operator<<(ostream& osThingy, const Meeting& p) {
	osThingy  << "Start time: " << p.getStartTime() << " : ";
	osThingy << "End time: " << p.getEndTime() << endl;
	osThingy << "Leader: " << p.getLeader()->getName() << endl;
	osThingy << "Subject: " << p.getSubject() << endl;
	osThingy << "Location: " << p.getLocation() << endl;
	osThingy << "Participants: " << endl;
	for (auto name : p.getParticipantList()) {
		osThingy << name << endl;
	}
	return osThingy;
}

vector<const Person*> Meeting::findPotentialCoDriving() const {
	vector<const Person*> haveCar;
	for (const auto m : meetings) {
		if (m->getDay() == this->day) {
			if (m->getLocation() == this->location) {
				if ((abs(m->startTime - this->startTime) <= 100) && (abs(m->endTime - this->endTime) <= 100)) {
					//if (m->subject != this->subject) {
						for (auto people : m->getParticipants()) {
							if (people->hasAvailableSeats()) {
								haveCar.push_back(people);
							}
						}
				//	}
				}
			}
		}

	}
	return haveCar;
}
