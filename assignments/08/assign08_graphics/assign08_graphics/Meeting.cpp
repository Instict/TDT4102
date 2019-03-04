#include "Meeting.h"
#include "std_lib_facilities.h"


set<const Meeting*> Meeting::meetings;

Meeting::Meeting(){
}
Meeting::Meeting(int day, int startTime, int endTime, Campus location, string subject, Person* leader) :
	day{ day },
	startTime{ startTime },
	endTime{ endTime },
	location{ location },
	subject{ subject },
	leader{ leader }{}

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
	participants.insert(participant);
}

vector<string> Meeting::getParticipantList() const {
	vector<string> dummyString;
	for (const auto &name : participants) {
		dummyString.push_back(name->getName());
	}
	
	return dummyString;
}
ostream& operator<<(ostream& osThingy, const Meeting& p) {
	int swidth = 10;
	osThingy  << "Start time: " << p.getStartTime() << endl;
	osThingy << "End time: " << p.getEndTime() << endl;
	osThingy << "Leader: " << p.getLeader()->getName() << endl;
	osThingy << "Subject: " << p.getSubject() << endl;
	osThingy << "Location: " << p.getLocation() << endl;
	osThingy << "Participants: " << setw(swidth) << endl;
	for (auto name : p.getParticipantList()) {
		osThingy << name << endl;
	}
	return osThingy;
}