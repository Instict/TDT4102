#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "Temperatures.h"
#include "Graph.h"
#include "Simple_window.h"

class Scale {
	int cbase;	//	data value to coordinate conversion
	int vbase;	//	coordinate base
	double scale;	//	base of values
public:
	Scale(int b, int vb, double s) :cbase{ b }, vbase{ vb }, scale{ s }{}
	int operator()(int v)const {
		return cbase + (v - vbase)*scale;
	}
};

int main() {
	initAssignment();
	isMac(false);
	//testIsMac();

	//awesomeMenuComingUp();

	//testReadTemperatures();

	//	General layout
	constexpr int xmax = 1280;
	constexpr int ymax = 720;
	constexpr int xoffset = 85;
	constexpr int yoffset = 40;
	constexpr int xspace = 40;
	constexpr int yspace = 40;
	constexpr int xlength = xmax - xoffset - xspace;
	constexpr int ylength = ymax - yoffset - yspace;

	//	Scaling data
	constexpr int base_month = 0;
	constexpr int end_month = 365;
	constexpr double xscale = double(xlength) / (end_month - base_month);
	constexpr double yscale = double(ylength) / 100;
	Scale xs{ xoffset,
		base_month,
		xscale };
	Scale ys{ (ymax - yoffset) / 2,
		base_month,
		-yscale };

	//	Building the graph
	Simple_window win{
		Point{100,100},
		xmax,
		ymax,
		"Canvas"
	};
	map<int, string>myM;
	myM[2] = "February";
	myM[3] = "March";
	myM[4] = "April";
	myM[5] = "May";
	myM[6] = "June";
	myM[7] = "July";
	myM[8] = "August";
	myM[9] = "September";
	myM[10] = "October";
	myM[11] = "November";
	myM[12] = "December";
	myM[13] = "January";
	string months;
	for (int i = 2; i - 2 < myM.size(); i++) {
		months += myM.at(i);
		for (int j = 0; j < xscale; j++) {
			months += "   ";
			cout << j << endl;
		}
	}

	Axis x{ Axis::x,
		Point{xoffset,(ymax - yoffset)/2},
		xlength,
		12,
		months
	};
	x.label.move(-xscale* xoffset, 0);
	Axis y{ Axis::y, 
		Point{xoffset,ymax - yoffset},
		ylength, 
		ylength/100, 
		"degrees" 
	};
	x.set_color(Color::black);
	y.set_color(Color::black);
	Line zero_degrees{ Point{xs(0),ys(0)},
		Point{xs(end_month),
		ys(0) } 
	};
	zero_degrees.set_style(Line_style::solid);
	zero_degrees.set_color(Color::black);



	Open_polyline max, min;

	Temperatures forGraph("temperatures.txt");
	for (int i = 0; i < int(forGraph.vectorThingy.size()); i++) {
		int x = xs(i);
		max.add(Point{ x,ys(int(forGraph.vectorThingy[i].max)) });
		min.add(Point{ x,ys(int(forGraph.vectorThingy[i].min)) });
	}

	
	/*
	for (Temp t; ifs >> t;) {
		const int x = 1;
		max.add(Point{ x,ys(t.max) });
		min.add(Point{ x,ys(t.min) });
	}
	*/

	Text posTwenty{ Point{70,ys(20)}, "20" };
	Text posTen{ Point{70,ys(10)}, "10" };
	Text posZero{ Point{70,ys(0)}, "0" };
	Text negTen{ Point{70,ys(-10)}, "-10" };
	Text negTwenty{ Point{70,ys(-20)}, "-20" };
	posTwenty.set_color(Color::black);
	posTen.set_color(Color::black);
	posZero.set_color(Color::black);
	negTen.set_color(Color::black);
	negTwenty.set_color(Color::black);
	win.attach(posTwenty);
	win.attach(posTen);
	win.attach(posZero);
	win.attach(negTen);
	win.attach(negTwenty);

	Text max_label{ Point{20,max.point(0).y}, "Max" };
	max.set_color(Color::red);
	max_label.set_color(Color::red);

	Text min_label{ Point{20,min.point(0).y}, "Min" };
	min.set_color(Color::blue);
	min_label.set_color(Color::blue);

	win.attach(max);
	win.attach(max_label);
	win.attach(min);
	win.attach(min_label);
	win.attach(x);
	win.attach(y);
	//win.attach(zero_degrees);
	//gui_main();


	win.wait_for_button();
	//testReadAndWriteThingy();
	//testReadAndLineNumbers();
	//testForCharInString();
	//readFromFile("grunnlov.txt", true);
	//testCountConstitution();
	//testAddCourses();
	//testOperator();
	//testWriteToFile();
	//testReadFromFile();
	//readFromFile("new_exampleText.txt", false);
	return 0;
}
