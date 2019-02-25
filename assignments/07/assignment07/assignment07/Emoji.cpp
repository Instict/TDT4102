#include "Emoji.h"
#include "std_lib_facilities.h"
#include "Graph.h"
#include "GUI.h"

Face::Face(Point center, int radius) : faceEmoji{ {center},radius }{
	faceEmoji.set_color(Color::white);
	faceEmoji.set_fill_color(Color::yellow);
}
void Face::attach_to(Graph_lib::Window& win) {
	win.attach(faceEmoji);
}

EmptyFace::EmptyFace(Point c, int r) : Face{ c, r },
	rightEye{ {c.x+r/3,c.y-(r/2)},r/10 }, leftEye{ {c.x-r/3,c.y-(r/2)},r/10 }{
	rightEye.set_color(Color::black);
	leftEye.set_color(Color::black);
	rightEye.set_fill_color(Color::black);
	leftEye.set_fill_color(Color::black);
}

void EmptyFace::attach_to(Graph_lib::Window& win) {
	Face::attach_to(win);
	win.attach(rightEye);
	win.attach(leftEye);
}

SmileyFace::SmileyFace(Point c, int r) : EmptyFace{ c, r },
	mouth{ {c.x,c.y+r/10}, r, r/2, 180, 0 }{
	mouth.set_color(Color::black);
	mouth.set_fill_color(Color::black);
}

void SmileyFace::attach_to(Graph_lib::Window& win) {
	EmptyFace::attach_to(win);
	win.attach(mouth);
}

SadFace::SadFace(Point c, int r) : EmptyFace{ c, r },
	mouth{ {c.x,c.y + r/10}, r, r / 2, 0, 180 }{
	mouth.set_color(Color::black);
	mouth.set_fill_color(Color::black);
}
void SadFace::attach_to(Graph_lib::Window& win) {
	EmptyFace::attach_to(win);
	win.attach(mouth);
}

AngryFace::AngryFace(Point c, int r) : SadFace{ c, r },
	rightBrow{ {c.x / 5 + r / 2,c.y / 10 + r / 5},{c.x - r / 10,c.y / 5 + r / 5} }, 
	leftBrow{ {c.x + r / 10,c.y / 5 + r / 5},{c.x + r / 5 + r / 10,c.y / 10 + r / 5} }
{

	rightBrow.set_color(Color::black);
	rightBrow.set_fill_color(Color::black);
	leftBrow.set_color(Color::black);
	leftBrow.set_fill_color(Color::black);
}

void AngryFace::attach_to(Graph_lib::Window& win) {
	SadFace::attach_to(win);
	win.attach(rightBrow);
	win.attach(leftBrow);
}

GrinFace::GrinFace(Point c, int r) : EmptyFace{ c, r },
mouth{ {c.x - r/2,c.y + r/5}, r, r / 3 }{
	mouth.set_color(Color::black);
	mouth.set_fill_color(Color::white);
}
void GrinFace::attach_to(Graph_lib::Window& win) {
	EmptyFace::attach_to(win);
	win.attach(mouth);
}
WinkeyFace::WinkeyFace(Point c, int r) : SmileyFace{ c, r },
rightEye{ {c.x + r / 3,c.y - (r / 2)},r / 5, r / 5, 0, 180 },
yellowRightEye{ {c.x + r / 3,c.y - (r / 2)},r / 10 }
{
		rightEye.set_color(Color::blue);
		rightEye.set_fill_color(Color::blue);
		yellowRightEye.set_color(Color::yellow);
		yellowRightEye.set_fill_color(Color::yellow);
}
void WinkeyFace::attach_to(Graph_lib::Window& win) {
	SmileyFace::attach_to(win);
	win.attach(yellowRightEye);
	win.attach(rightEye);
	
}
