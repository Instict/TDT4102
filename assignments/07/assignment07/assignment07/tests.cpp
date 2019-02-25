#include "tests.h"
#include "Emoji.h"

// Size of window and emoji radius
constexpr int xmax = 1000;
constexpr int ymax = xmax;
constexpr int emojiRadius = 50;

using namespace Graph_lib;

const Point tl{ 100, 100 };
const string win_label{ "Emoji factory" };
Point center = { xmax/2,ymax/2 };
int emojiFace = ymax / 2;
//int emojiFace = ymax / 8;
//Point center = { xmax / 8, ymax / 8 }
;

/* TODO:
 *  - initialize emojis
 *  - connect emojis to window
 **/
/*
void testAbstract() {
	Simple_window win{ tl, xmax, ymax, win_label };
	Face newFace(center, emojiFace);
	newFace.attach_to(win);
	win.wait_for_button();
}
*/
void printSmiley() {
	Simple_window win{ tl, xmax, ymax, win_label };
	SmileyFace newFace(center, emojiFace);
	newFace.attach_to(win);
	win.wait_for_button();
}
void printSad() {
	Simple_window win{ tl, xmax, ymax, win_label };
	SadFace newFace(center, emojiFace);
	newFace.attach_to(win);
	win.wait_for_button();
}

void printAngry() {
	Simple_window win{ tl, xmax, ymax, win_label };
	AngryFace newFace(center, emojiFace);
	newFace.attach_to(win);
	win.wait_for_button();
}
void printGrin() {
	Simple_window win{ tl, xmax, ymax, win_label };
	GrinFace newFace(center, emojiFace);
	newFace.attach_to(win);
	win.wait_for_button();
}
void printWinkey() {
	Simple_window win{ tl, xmax, ymax, win_label };
	WinkeyFace newFace(center, emojiFace);
	newFace.attach_to(win);
	win.wait_for_button();
}