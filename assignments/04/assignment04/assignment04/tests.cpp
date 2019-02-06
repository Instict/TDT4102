#include "tests.h"
#include "utilities.h"
#include "std_lib_facilities.h"

/*
Adding test functions seems like a decent way to show the assignment
*/

void testCallByValue() {
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	int result = incrementByValueNumTimes(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< " result: " << result << endl;
}

void testCallByReference(){
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	incrementByValueNumTimesRef(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< endl;
}

void testswapNumbers() {
	int firstNum = 10;
	int secondNum = 5;
	int set_width = 10;
	cout << "before swap" << endl;
	cout << "First: " << firstNum << setw(set_width) << "Second: " << secondNum << endl;
	swapNumbers(firstNum, secondNum);
	cout << "after swap" << endl;
	cout << "First: " << firstNum << setw(set_width) << "Second: " << secondNum << endl;
}

void testVectorSorting() {
	cout << "testVectorSorting" << endl;
	vector<int> percentages;
	int iterations;
	cout << "Generer tall(antall: ";
	getIntFromUser(iterations);
	randomizeVector(percentages, iterations);
	for (int i = 0; i < iterations; i++) {
		cout << i << " : " << percentages[i] << endl;
	}
	cout << "Median of: " << medianOfVector(percentages) << endl;
	sortVector(percentages);
	for (int i = 0; i < iterations; i++) {
		cout << i << " : " << percentages[i] << endl;
	}
	cout << "Median of: " << medianOfVector(percentages) << endl;
}


void testString() {
	cout << "testString()" << endl;
	string grades;
	//	A-F = 65-70
	int letterA = 65;
	int letterF = 70;
	int iterations;

	cout << "Number of students: ";
	getIntFromUser(iterations);
	cout << endl;
	grades = randomizeString(iterations, letterF, letterA);
	for (int i = 0; i < grades.size(); i++) {
		cout << i << " : " << grades[i] << endl;
	}

	cout << setprecision(2) << "average grade is: " << averageGrading(grades, letterA, letterF, iterations) << endl;
}

/*
Just a test function to check if the random thingy actually works.
*/
void testError(int min, int maks, int iterations) {
	int error = 0;
	int ranNum;
	for (int i = 0; i < iterations; i++) {
		ranNum = randomWithLimits(maks, min);
		cout << "ran: " << ranNum << endl;
		if (ranNum > maks || ranNum < min) {
			cout << "error" << endl;
			error++;
		}
	}
	cout << "amount of error: " << error << endl;
}

void testForCharInString() {
	string thatString;
	switch (randomWithLimits(10, 1)) {
	case 1: thatString = { "I invented a new word! Plagiarism!" }; break;
	case 2: thatString = { "Why is Peter Pan always flying? He neverlands." }; break;
	case 3: thatString = { "My boss told me to have a good day.. so I went home." }; break;
	case 4: thatString = { "I ate a clock yesterday, it was very time consuming." }; break;
	case 5: thatString = { "A blind man walks into a bar. And a table. And a chair." }; break;
	case 6: thatString = { "My wife accused me of being immature. I told her to get out of my fort." }; break;
	case 7: thatString = { "Where do you find a cow with no legs? Right where you left it." }; break;
	case 8: thatString = { "As I suspected, someone has been adding soil to my garden. The plot thickens." }; break;
	case 9: thatString = { "I just wrote a book on reverse psychology. Do *not* read it!" }; break;
	case 10: thatString = { "When you look really closely, all mirrors look like eyeballs." }; break;
	}

	cout << thatString << endl;
	char secondChar = randomWithLimits(122, 97);
	for (char firstChar = 97; firstChar < 123; firstChar++) {
		if (countChar(thatString, firstChar) != 0) {
			cout << firstChar << " : " << countChar(thatString, firstChar) << " time(s)" << endl;
		}
	}
}
