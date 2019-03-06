#pragma once
#include "Graph.h"
#include "Window.h"
#include "GUI.h"
#include "Person.h"
using namespace Graph_lib;

class MeetingWindow : Graph_lib::Window{
private:
	static constexpr int fieldH = 40;
	static constexpr int fieldW = 300;
	static constexpr int fieldPad = 100;
	static constexpr int buttonW = 80;
	static constexpr int buttonH = 30;
	static constexpr int buttonPad = 20;
	static constexpr int pad = 150;
	In_box participantName, participantEmail;
	Button quitButton, addButton, printButton,randomButton;
	static void cb_add(Address, Address pw);
	static void cb_quit(Address, Address pw);
	static void cb_print(Address, Address pw);
	static void cb_random(Address, Address pw);
	void addPressed();
	void quitPressed();
	void printPressed();
	void randomPressed();
	void addRandomPeople();
	Vector_ref<Person> people;
public:
	MeetingWindow(Point xy, int w, int h, const string& title);
	~MeetingWindow() {}
};

