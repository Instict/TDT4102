// Example program in TDT4102_Graphics template, from PPP page 415
#include "Graph.h"
#include "Simple_window.h" 
#include "Car.h"
#include "tests.h"
#include "Person.h"
#include "Meeting.h"
int main() {
	setlocale(LC_ALL, "norwegian");

	/*
	using namespace Graph_lib;
	
	cout << "The New \"Hello, Graphical World!\" message\n";
	Point tl{ 100, 100 };
	Simple_window win{ tl, 600, 400, "Canvas" }; 

	Polygon poly;
	poly.add(Point{ 300, 200 });
	poly.add(Point{ 350, 100 });
	poly.add(Point{ 400, 200 });
	poly.set_color(Color::red);

	win.attach(poly);
	win.wait_for_button();
	*/

	//testReserveSeats();
	//testPersonAndCar();
	Car kariCar(3);
	Car olaCar(2);
	Car hansCar(0);


	Person leader("Ola Normann", "ola@norman.no", &olaCar);
	Person perKari("Kari Normann", "kari@normann.no", &kariCar);
	Person perHans("Hans Normann", "hans@normann.no", &hansCar);

	int day = 1;
	int startTime = 10;
	int endTime = 12;
	Campus location = Campus::Gloshaugen;
	string subject = "First meeting";

	Meeting m(day, startTime, endTime, location, subject, &leader);
	

	m.addParticipant(&leader);
	m.addParticipant(&perKari);
	m.addParticipant(&perHans);
	cout << "---" << endl;
	cout << m << endl;

}

