// Example program in TDT4102_Graphics template, from PPP page 415
#include "Graph.h"
#include "Simple_window.h" 
#include "menu.h"
#include "masterVisual.h"
#include "mastermind.h"

int main() {
	using namespace Graph_lib;
	srand(static_cast<unsigned int>(time(nullptr)));

	cout << "The New \"Hello, Graphical World!\" message\n";
	//Point tl{ 100, 100 };
	//Simple_window win{ tl, 600, 400, "Canvas" }; 

	playMastermind();

	/*
	Polygon poly;
	poly.add(Point{ 300, 200 });
	poly.add(Point{ 350, 100 });
	poly.add(Point{ 400, 200 });
	poly.set_color(Color::red);

	mwin.attach(poly);
	mwin.wait_for_button();
	*/
	//awesomeMenuComingUp();
}

