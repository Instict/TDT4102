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
	/*
	cout << "Swap first two numbers" << endl;
	swapNumbers(percentages[0], percentages[1]);
	for (int i = 0; i < 2; i++) {
		cout << i << " : " << percentages[i] << endl;
	}
	*/
	sortVector(percentages);
	for (int i = 0; i < iterations; i++) {
		cout << i << " : " << percentages[i] << endl;
	}
	cout << "Median of: " << medianOfVector(percentages) << endl;
}