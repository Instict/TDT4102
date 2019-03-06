#include "MeetingWindow.h"
#include "Window.h"

using namespace Graph_lib;



MeetingWindow::MeetingWindow(Point xy, int w, int h, const string& title) :
	Window(xy, w, h, title),
	participantName(Point{ fieldPad, pad / 2 }, fieldW, fieldH, "Name"),
	participantEmail(Point{ fieldPad, pad / 2 + fieldH }, fieldW, fieldH, "Email"),
	quitButton(Point{ x_max() - pad, pad / 2 }, buttonW, buttonH, "quit", cb_quit),
	addButton(Point{ x_max() - pad*3, pad / 2 + fieldH*3 }, buttonW, buttonH, "Add person", cb_add),
	printButton(Point{ x_max() - pad * 2, pad / 2 + fieldH * 3 }, buttonW, buttonH, "Print person", cb_print),
	randomButton(Point{ x_max() - pad, pad / 2 + fieldH * 3 }, buttonW, buttonH, "Add random", cb_random)
{
	attach(participantName);
	attach(participantEmail);
	attach(quitButton);
	attach(addButton);
	attach(printButton);
	attach(randomButton);
}

void MeetingWindow::cb_add(Address, Address pw) {
	reference_to<MeetingWindow>(pw).addPressed();
}
void MeetingWindow::cb_quit(Address, Address win) {
	reference_to<MeetingWindow>(win).quitPressed();
}
void MeetingWindow::cb_print(Address, Address win) {
	reference_to<MeetingWindow>(win).printPressed();
}
void MeetingWindow::cb_random(Address, Address win) {
	reference_to<MeetingWindow>(win).randomPressed();
}
void MeetingWindow::quitPressed() {
	hide();
}
void MeetingWindow::printPressed() {
	cout << "print pressed" << endl;
	for (auto &info : people) {
		cout << "Name: " << info->getName() << ", email: " << info->getEmail() << endl;
	}
}
void MeetingWindow::randomPressed() {
	addRandomPeople();
}
void MeetingWindow::addRandomPeople() {
	people.push_back(new Person("Person 1", "person@one", nullptr));
	people.push_back(new Person("Person 2", "person@two", nullptr));
	people.push_back(new Person("Person 3", "person@three", nullptr));
	people.push_back(new Person("Person 4", "person@four", nullptr));
	people.push_back(new Person("Person 5", "person@five", nullptr));
	people.push_back(new Person("Person 6", "person@six", nullptr));
	people.push_back(new Person("Person 7", "person@seven", nullptr));
}
void MeetingWindow::addPressed() {
	cout << "add pressed" << endl;
	people.push_back(new Person(participantName.get_string(), participantEmail.get_string(), nullptr));
};