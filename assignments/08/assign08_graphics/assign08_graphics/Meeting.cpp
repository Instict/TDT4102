#include "Meeting.h"
#include "std_lib_facilities.h"





Meeting::Meeting(){
}


Meeting::~Meeting(){
}

ostream& operator<<(ostream& osThingy, const Campus& p) {
	osThingy << p << endl;
	return osThingy;
}
int Meeting::getDay() {
	return day;
}
int Meeting::getStartTime() {
	return startTime;
}
int Meeting::getEndTime() {
	return endTime;
}
Campus Meeting::getLocation() {
	return location;
}
string Meeting::getSubject() {
	return subject;
}
Person* Meeting::getLeader() {
	return leader;
}
void Meeting::addParticipant(Person* participant) {
	this->participants = participants;
}