#include "std_lib_facilities.h"

int add(int a, int b) {
	return a + b;
}

//	1	Task A
void inputAndPrintInteger() {
	int number = 0;
	cout << "heltall: ";
	cin >> number;
	cout << "Du skrev: " << number << '\n';

}

//	1	Task B
int inputInteger() {
	int in_user = 0;
	cout << "heltall: ";
	cin >> in_user;
	return in_user;
}


// 1	Task C
void inputIntegersAndPrintSum() {
	int x_1 = inputInteger();
	int x_2 = inputInteger();
	cout << "Summen av tallene: " << add(x_1, x_2) << '\n';
}

//	1	Task E
bool is0dd(int heltall) {
	if (heltall%2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
void testIs0dd(int start, int stop) {
	for (int i = start; i <= stop; i++) {
		if (is0dd(i)) {
			cout << i << " er et partall\n";
		}
		else {
			cout << i << " er et oddetall\n";
		}
	}
}

//	1	Task F
void printHumanReadableTime(int parameter) {
	int days = 0;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	days = parameter / (24 * 3600);
	hours = parameter / 3600;
	minutes = parameter%3600 / 60;
	seconds = parameter%60;

	if (days > 0) {
		cout << days << " dager, ";
	}
	if (hours > 0) {
		cout << hours << " timer, ";
	}
	if (hours == 0 && days > 0) {
		cout << hours << " timer, ";
	}
	if (minutes > 0) {
		cout << minutes << " minutter, ";
	}
	if (minutes == 0 && hours > 0) {
		cout << minutes << " minutt, ";
	}
	cout << seconds << " sekunder!";
}

//	2	Task A
void inputIntegersUsingLoopAndPrintSum() {
	int user_input;
	int sum = 0;
	cout << "Skriv tall som skal summeres, avslutt med 0\n";
	do {
		user_input = inputInteger();
		sum += user_input;
	} while (!user_input == 0);
	cout << "Summen er: " << sum << endl;
}

//	2	Task C
double inputDouble() {
	double in_user = 0;
	cout << "desimaltall: ";
	cin >> in_user;
	return in_user;
}

//	2	Task D
void convertFromNokToEuro() {
	double exchange_rate = 9.75;
	cout << "Velkommen til min bank, med de sykeste kursene!\nDagens kurs er pa " << setprecision(2) << exchange_rate << '\n';
	cout << "Skriv belop i norske kroner, ";
	double norske_kroner = inputDouble();
	double euro = norske_kroner / exchange_rate;
	cout << "Dine " << norske_kroner << " norske kroner ble om til " << euro << " euro!\n";
	cout << setprecision(2) << fixed << "Men siden vi ikke har smapenger, sa ender du opp med " << euro << " euro!\n";
}

//	3	Task B

void someKindOfTableComingUp() {
	cout << "Bredde, ";
	int set_width = inputInteger();
	cout << "Hoyde, ";
	int set_height = inputInteger()/2;
	if (set_height == 0) {
		set_height = 1;
	}
	for (int j = 1; j < 10; j++) {
		for (int i = 1; i < 10; i++) {
			cout << setw(set_width)  << i * j;
		}
		for (int k = 0; k < set_height; k++) {
		cout << endl;
		}
	}
}


//	4	Task A
double discriminant(double a, double b, double c) {
	return pow(b, 2.0) - 4 * a*c;
}

//	4	Task B
void printRealRoots(double a, double b, double c) {
	double disc = discriminant(a, b, c);
	double denominator;
	double numerator;
	double x_1, x_2;
	if (disc > 0) {
		//	2 solutions
		denominator = 2 * a;
		x_1 = (-b + sqrt(disc)) / denominator;
		x_2 = (-b - sqrt(disc)) / denominator;
		cout << "x_1 = " << x_1 << " x_2 = " << x_2;
	}
	if (disc == 0) {
		//	1 solution
		numerator = -b;
		denominator = 2 * a;
		x_1 = numerator / denominator;
		cout << "One solution, x = " << x_1;
	}
	if (disc < 0) {
		cout << "No solution";
	}
}

//	4	Task C
void solveQuadraticEquation() {
	cout << "ax^2 + bx + c = 0\n";
	cout << "a, ";
	double a = inputDouble();
	cout << "b, ";
	double b = inputDouble();
	cout << "c, ";
	double c = inputDouble();
	cout << endl;
	printRealRoots(a, b, c);
}

//	5	Task A
vector<int> calculateSeries(int totaltLan, int antallAvdrag, int rente) {
	vector<int> avdragsbelop(antallAvdrag);
	int gjenstaendeLan = totaltLan;
	for (int i = 0; i < avdragsbelop.size(); i++) {
		avdragsbelop[i] = totaltLan / antallAvdrag + (rente*gjenstaendeLan) / 100;
		gjenstaendeLan -= totaltLan / antallAvdrag;
	}
	return avdragsbelop;
}
//	5	Task B
vector<double> calculateAnnuity(double totaltLan, double antallAvdrag, double rente) {
	vector<double> rolf(antallAvdrag);
	for (int i = 0; i < rolf.size(); i++) {
		rolf[i] = totaltLan *((rente / 100) / (1 - pow((1 + rente / 100), -antallAvdrag)));
	}
	return rolf;
}

//	5	Task C
void whichIsCheaper() {
	cout << "Norske kroner, ";
	int totaltLan = inputInteger();
	cout << "Antall ar, ";
	int antallAvdrag = inputInteger();
	cout << "Rente (%), ";
	int rente = inputInteger();
	vector<int> series(antallAvdrag);
	vector<double> annuity(antallAvdrag);
	series = calculateSeries(totaltLan, antallAvdrag, rente);
	annuity = calculateAnnuity(totaltLan, antallAvdrag, rente);
	int series_total = 0;
	int annuity_total = 0;
	int set_width = 20;
	cout << fixed << "Year" << setw(set_width) << "Annuitet" << setw(set_width) << "Serie" << setw(set_width) << "Difference" << endl;
	for (int j = 0; j < series.size(); j++) {
		cout << fixed << setprecision(0) << j + 1  << setw(set_width) << annuity[j] << setw(set_width) << series[j] << setw(set_width) << (annuity[j]-series[j]) << endl;
		series_total += series[j];
		annuity_total += annuity[j];
	}
	set_width = 15;
	cout << fixed << "Total: " << setw(set_width) << annuity_total << setw(set_width) << series_total << setw(set_width) << (annuity_total - series_total) << endl;
}
//	3	Task A ====== Menu ======
void awesomeMenuComingUp() {
	int user_input;
	do {
		cout << "\nVelg funksjon:\n"
			"0)Avslutt\n"
			"1)Summer to tall\n"
			"2)Summer flere tall\n"
			"3)Konverter NOK til EURO\n"
			"4)Gangetabellen!\n"
			"5)Andregradslikning\n"
			"6)Laane penger!\n"
			"Angi valg (0-6): ";
		cin >> user_input;
		if (user_input == 1) {
			system("CLS");
			cout << "Summer to tall!\n";
			inputIntegersAndPrintSum();
		}
		if (user_input == 2) {
			system("CLS");
			inputIntegersUsingLoopAndPrintSum();
		}
		if (user_input == 3) {
			system("CLS");
			convertFromNokToEuro();
		}
		if (user_input == 4) {
			system("CLS");
			cout << "Velkommen til gangetabellen!\n";
			someKindOfTableComingUp();
		}
		if (user_input == 5) {
			system("CLS");
			solveQuadraticEquation();
		}
		if (user_input == 6) {
			system("CLS");
			whichIsCheaper();
		}
	} while (!user_input == 0);
}
int main() {

	// Your code here

	//	1	Task A
	//inputAndPrintInteger();

	//	1	Task B
	//int number = inputInteger();
	//cout << "Du skrev: " << number;

	//	1	Task C
	//inputIntegersAndPrintSum();

	//	1	Task D
	/*
	Valgte a bruke inputInteger(), siden denne returnerte en sum. Slik kunne eg lagre verdien til en variabel
	som sa ble sendt til add() funksjonen. Om eg feks vil bruke disse verdiene senere.
	*/
	//	1	Task E
	//testIs0dd(0, 15);

	//	1	Task F
	//printHumanReadableTime(10000);
	
	//	2	Task A
	//inputIntegersUsingLoopAndPrintSum();

	//	2	Task B
	/*
	Do while, om man ikke vet hvor mange tall som skal skrives inn pa forhand
	for og while er bedre om man vet hvor mange ganger en loop skal kjores
	*/

	//	2	Task C		
	//double number = inputDouble();
	//cout << "Du skrev: " << number;

	//	2	Task D
	//convertFromNokToEuro();

	//	2	Task E		================= TODO

	//	3	Task A
	awesomeMenuComingUp();

	//	3	Task B		
	//someKindOfTableComingUp();

	//	4	Task A
	//discriminant(1, -8, 16);
	//	4	Task B
	//printRealRoots(1, -8, 16);
	//	4	Task C
	//solveQuadraticEquation();
	//	4	Task D
	//	4	Task E

	//	5	Task A
	//	5	Task B
	//	5	Task C
	//whichIsCheaper();
	return 0;
}